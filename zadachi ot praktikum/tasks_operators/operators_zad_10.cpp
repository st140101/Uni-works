#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number_one, number_two = 0;

	cout << "Enter your first number : \n";
	cin >> number_one;

	cout << "Enter your second number : \n";
	cin >> number_two;

	cout << "The bigger number of the two is: " << (number_one > number_two ? number_one : number_two) << endl;

	return 0;
}
