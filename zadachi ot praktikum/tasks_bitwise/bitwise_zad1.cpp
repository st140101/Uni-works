#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number = 0;
	
	cout << "Enter your number: \n";
	cin >> number;

	if ((number & 1) == 1)
	{
		cout << "Your number is uneven." << endl;
	}
	else
	{
		cout << "Your number is even." << endl;
	}
	
	return 0;
}
