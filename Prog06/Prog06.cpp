// Prog06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char c;
	int isLowercaseVowel, isUppercaseVowel;

	cout << "Enter a letter: ";
	cin >> c;

	isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	if (isLowercaseVowel || isUppercaseVowel)
		cout << c << " is a vowel. \n";
	else
		cout << c << " is a consonant. \n";

	system("pause");
	return 0;
}

