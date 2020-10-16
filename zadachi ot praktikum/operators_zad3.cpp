#include <iostream>
using namespace std;

int main()
{
	double lev = 0;
	double euro = 0;
	double course = 0.511306792;
	cout << "Enter in BGN: ";
	cin >> lev;
	euro = lev * course;
	cout << "That amount in euro is: " << euro;
	return 0;
}