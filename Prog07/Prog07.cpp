// Prog07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	float numOne, numTwo, numThree;

	cout << "Enter three numbers: ";
	cin >> numOne >> numTwo >> numThree;

	if (numOne >= numTwo && numOne >= numThree)
	{
		cout << "Largest number: " << numOne << "\n";
	}

	if (numTwo >= numOne && numTwo >= numThree)
	{
		cout << "Largest number: " << numTwo << "\n";
	}

	if (numThree >= numOne && numThree >= numTwo)
	{
		cout << "Largest number: " << numThree << "\n";
	}

	system("pause");
	return 0;
}

