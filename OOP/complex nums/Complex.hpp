#pragma once

class Complex {
public:
	double real;
	double imaginary;

	Complex(); // constructor
	Complex(double real_part); // complex from real
	Complex(double real_part, double imaginary_part); // create a complex num
	
	//methods:
	bool isEqualTo(const Complex& num) const;
	Complex addTo(const Complex& num) const;
	Complex multiplyWith(const Complex& num) const;
	Complex conjugated() const;
	void conjugate();
};