#include <iostream>
using namespace std;

int main()
{
	unsigned int number, bit_place;

	cout << "Enter your number: \n";
	cin >> number;
	cout << "Enter which bit you'd like to check: \n";
	cin >> bit_place;

	int result = 0;
	result = number >> (bit_place-1);
	
	if ((result & 1) == 1)
	{
		cout << "The " << bit_place << " bit is 1." << endl;
	}
	else
	{
		cout << "The " << bit_place << " bit is 0." << endl;
	}

	return 0;
}