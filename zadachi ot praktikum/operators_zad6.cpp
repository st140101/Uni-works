#include <iostream>
using namespace std;

int main()
{
	int number = 0, remainder =0, multiplied = 0;
	double average = 0.0;
	double sum = 0.0;
	int digit_one, digit_two, digit_three, digit_four = 0;

	cout << "Enter your number: \n";
	cin >> number;
	
	digit_one = number % 10;
	digit_two = number / 10 % 10;
	digit_three = number / 100 % 10;
	digit_four = number / 1000 % 10;

	sum = digit_one + digit_two + digit_three + digit_four;
	multiplied = digit_one * digit_two * digit_three * digit_four;
	average = sum / 4;

	cout << "The sum of the digits of " << number << " is " << sum << endl;
	cout << "The multiplication of the digits of " << number << " is " << multiplied << endl;
	cout << "The average of the digits of " << number << " is " << average << endl;
	
	return 0;
}
