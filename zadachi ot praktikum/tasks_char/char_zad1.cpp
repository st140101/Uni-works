#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	cout << "Enter a number between 0-255: \n";
	cin >> number;
    
	cout << "Your the corresponding ASCII symbol with that value is: " << char(number) << endl;
	
	return 0;
}