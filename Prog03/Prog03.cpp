// Prog3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int numOne, numTwo, ans;

	cout << "Enter two numbers to add: \n";
	cin >> numOne >> numTwo;

	ans = numOne + numTwo;

	cout << "Sum of  " << numOne << " and " << numTwo << " is " << ans << "\n";

	system("pause");
	return 0;
}
