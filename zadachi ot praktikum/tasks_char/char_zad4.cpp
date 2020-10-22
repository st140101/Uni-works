#include <iostream>
using namespace std;

int main()
{
	const char start = 'A', end = 'Z', middle = (start + end) / 2;

	char input;
	cout << "Enter a letter: \n";
	cin >> input;

	char distance, output;

	if (input <= middle)
	{
		distance = input - start;
		output = end - distance;
	}
	else
	{
		distance = end - input;
		output = start + distance;
	}

	cout << "The letter symmetric to yours is: " << output << endl;

	return 0;
}