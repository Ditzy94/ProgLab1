// Prog16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int n;
	char numIn;

	cout << "Enter character from 0 to 9 : \n";
	cin >> numIn;

	n = numIn - 48;

	cout << n << "\n";

	system("pause");
	return 0;
}
