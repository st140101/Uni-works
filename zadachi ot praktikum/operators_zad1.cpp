#include <iostream>
using namespace std;

int main()
{
	int number_one, number_two, difference = 0;
	
	cout << "Enter your first number: \n";
	cin >> number_one;
	cout << "Enter your second number: \n";
	cin >> number_two;

	difference = number_one - number_two;

	cout << "The difference " << number_one << "-" << number_two << " is = " << difference;
	
	return 0;
}
