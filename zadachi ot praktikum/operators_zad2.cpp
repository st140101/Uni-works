#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int area = 0;
	int circ = 0; //circ here stands for circumference
	float pi = 3.14;
	float sqrt3 = 1.73;
	float circle = 0;
	float triangle_area = 0;
	int triangle_circ = 0;
	cout << "Enter a number for the side a: ";
	cin >> a;
	area = a * a;
	cout << "The area of a square with side a is: " << area << endl;
	circ = 4 * a;
	cout <<	"The circumference is:" << circ << endl;
	circle = 2 * pi * a;
	cout << "The lenght of a circle with radius a is: " << circle << endl;
	triangle_circ = 3 * a;
	triangle_area = (a * a) * (sqrt3 / 4);
	cout << "The area and circumference of a triangle with side a are: " << triangle_area << triangle_circ << endl;
	return 0;
}
