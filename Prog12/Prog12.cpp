// Prog12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double num1, num2, ans;
	cout << "Enter two numbers: \n";
	cin >> num1 >> num2;

	ans = num1 * num2;

	cout << "Answer = " << ans << "\n";

	system("pause");
	return 0;
}
