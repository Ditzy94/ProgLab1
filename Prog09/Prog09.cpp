// Prog09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "Enter a positive number: ";
	cin >> num;

	for (int i = 1; i <= 10; ++i)
	{
		cout << num << " * " << i << " = " << num * i << "\n";
	}

	system("pause");
	return 0;
}

