#include <iostream>
using namespace std;

int main()
{
	int number_one, number_two, temp_number = 0;	

	cout << "Enter your first number: \n";
	cin >> number_one;
	
	cout << "Enter your second number: \n";
	cin >> number_two;

	if (number_one != 0 && number_two != 0) {
		cout << "Your numbers are " << number_one << " and " << number_two << endl;
		
		temp_number = number_one;
		number_one = number_two;
		number_two = temp_number;

		cout << "Your reversed numbers are " << number_one << " and " << number_two << endl;
	}
	else {
		cout << "Your numbers must not be 0!";
	}
	
	return 0;
}
