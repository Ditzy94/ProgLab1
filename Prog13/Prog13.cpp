// Prog13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, num, digit, rev = 0;

	cout << "Enter a positive number: \n";
	cin >> num;

	n = num;

	do
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	} while (num != 0);

	cout << " The reverse of the number is: " << rev << "\n";

	if (n == rev)
		cout << " The number is a palindrome \n";
	else
		cout << " The number is not a palindrome \n";

	system("pause");
	return 0;
}
