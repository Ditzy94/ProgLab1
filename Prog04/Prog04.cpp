// Prog04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, temp;

	cout << "Enter two numbers to swap: \n";
	cin >> a >> b;

	cout << "Before swapping. \n";
	cout << "A = " << a << ", B = " << b << "\n";

	temp = a;
	a = b;
	b = temp;

	cout << "\nAfter swapping. \n";
	cout << "A= " << a << ", B = " << b << "\n";

	system("pause");
	return 0;
}


