// Lab05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "Enter number: ";
	cin >> num;

	if (num % 2 == 0)
		cout << num << " is even. \n";
	else
		cout << num << " is odd. \n";

	system("pause");
	return 0;
}


