#include <iostream>
using namespace std;

int main()
{
	unsigned int number, power = 0;

	cout << "Enter your number: \n";
	cin >> number;
	cout << "Enter to which power you'd like to raise 2: \n";
	cin >> power;

	int result = number * (1 << power);

	cout << number << ".2^" << power << " is " << result << endl;
	
	return 0;
}