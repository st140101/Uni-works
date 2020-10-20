#include <iostream>
using namespace std;

int main()
{
	int a, b, power_three = 0;
	
	cout << "Enter number one: \n";	cin >> a;
	cout << "Enter number two: \n";	cin >> b;
	
	power_three = (a + b) * (a + b) * (a + b);
	cout << "(a+b)^3 is: " << power_three;
	
	return 0;
}
