#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int square_area = 0;
	int square_circumference = 0; 
	float pi = 3.14;
	float sqrt3 = 1.73;
	float circle = 0;
	float triangle_area = 0;
	int triangle_circumference = 0;
	cout << "Enter a number for the side a: ";
	cin >> a;
	square_area = a * a;
	cout << "The area of a square with side a is: " << square_area << endl;
	square_circumference = 4 * a;
	cout <<	"The circumference of the square is:" << square_circumference << endl;
	circle = 2 * pi * a;
	cout << "The lenght of a circle with radius a is: " << circle << endl;
	triangle_circumference = 3 * a;
	triangle_area = (a * a) * (sqrt3 / 4);
	cout << "The area and circumference of a triangle with side a are: " << triangle_area << " and " << triangle_circumference << endl;
	return 0;
}
