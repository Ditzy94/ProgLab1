// Prog10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, reverse = 0, remainder;

	cout << "Enter an integer: \n";
	cin >> n;

	while (n != 0)
	{
		remainder = n % 10;
		reverse = reverse * 10 + remainder;
		n /= 10;
	}

	cout << "Reversed Number = " << reverse << "\n";

	system("pause");
	return 0;
}

