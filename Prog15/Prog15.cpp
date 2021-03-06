// Prog15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int toDecimal(int binIn)
{
	int decimalNumber = 0, i = 0, remainder;
	while (binIn != 0)
	{
		remainder = binIn % 10;
		binIn /= 10;
		decimalNumber += remainder * pow(2, i);
		++i;
	}
	return decimalNumber;
}

int main()
{
	int binIn;

	cout << "Enter a binary number: ";
	cin >> binIn;

	cout << binIn << " in binary = " << toDecimal(binIn) << " in decimal \n";

	system("pause");
	return 0;
}
