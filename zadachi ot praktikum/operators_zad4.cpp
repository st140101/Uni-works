#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int power_three = 0;
	cout << "Enter number one: ";	cin >> a;
	cout << "Enter number two: ";	cin >> b;
	power_three = (a + b) * (a + b) * (a + b);
	cout << "(a+b)^3 is: " << power_three;
	return 0;
}