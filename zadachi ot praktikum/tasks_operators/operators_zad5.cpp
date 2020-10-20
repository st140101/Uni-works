#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	int reversed_number = 0;
	int remainder = 0;
		
	cout << "Enter a number: \n";
	cin >> number;
		
	while (number != 0)
	 {
		remainder = number % 10;
		reversed_number = reversed_number * 10 + remainder;
		number /= 10;
	 }
		
	cout << "That number reversed is: " << reversed_number;
	
	return 0;
}
