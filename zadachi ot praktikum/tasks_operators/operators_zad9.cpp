#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c = 0;
		
	cout << "Enter coefficient 'a' for ax^2 + bx + c = 0 : \n";
	cin >> a;
	
	cout << "Enter coefficient 'b' for ax^2 + bx + c = 0 : \n";
	cin >> b;
	
	cout << "Enter coefficient 'c' for ax^2 + bx + c = 0 : \n";
	cin >> c;

	cout << "The quadratic equation is: " << a << "x^2+" << b << "x+" << c << "." << endl;
	
	int discriminant = 0;
	discriminant = b * b - 4 * a * c;
        
	int x1, x2 = 0; // x1 and x2 refer to the roots of the equation
	if (discriminant == 0) {
		x1 = (-b) / (2 * a);
		
		cout << "The quadratic equation" << a << "x^2+" << b << "x+" << c << " has one real root " << x1 << endl;
	}
	else {
		x1 = (-b + sqrt(discriminant)) / (2 * a );
		x2 = (-b - sqrt(discriminant)) / (2 * a);

		cout << "The quadratic equation has two real roots " << x1 << " and " << x2 << "." << endl;
	}
	
	return 0;
}
