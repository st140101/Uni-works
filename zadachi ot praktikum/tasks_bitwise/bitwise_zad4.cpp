#include <iostream>
using namespace std;

int main()
{
	int number = 0;

	cout << "Enter your number: \n";
	cin >> number;

	number = ~number;
	
	cout << number << endl;
	
	return 0;
}