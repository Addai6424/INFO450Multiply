
// Assignment 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main(void)
{
	int a;
	int b;
	cout << "Multiplication table:" << endl
		<< "  0\t1\t2\t3\t4\t5\t6\t7\t8\t9" << endl;
	for (int a = 0; a < 11; a++)
	{
		cout << a << "=";
		for (int b = 0; b < 10; b++)
		{
			cout << b * a << '\t';
		}
		cout << endl;
	}
	return 0;
}
