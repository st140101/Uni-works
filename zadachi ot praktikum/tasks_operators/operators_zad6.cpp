#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	
	cout << "Enter your number: \n";
	cin >> number;
	
	int digit_one, digit_two, digit_three, digit_four = 0;
	digit_one = number % 10;
	digit_two = number / 10 % 10;
	digit_three = number / 100 % 10;
	digit_four = number / 1000 % 10;
        
	int multiplied = 0;		
	double average, sum = 0.0;
	sum = digit_one + digit_two + digit_three + digit_four;
	multiplied = digit_one * digit_two * digit_three * digit_four;
	average = sum / 4;

	cout << "The sum of the digits of " << number << " is " << sum << endl;
	cout << "The multiplication of the digits of " << number << " is " << multiplied << endl;
	cout << "The average of the digits of " << number << " is " << average << endl;
	
	return 0;
}
