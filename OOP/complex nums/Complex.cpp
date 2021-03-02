#include "Complex.hpp"

Complex::Complex() {
	real = 0;
	imaginary = 0;
}

Complex::Complex(double real_part) {
	real = real_part;
	imaginary = 0;
}

Complex::Complex(double real_part, double imaginary_part) {
	real = real_part;
	imaginary = imaginary_part;
}

bool Complex::isEqualTo(const Complex& num) const {
	if (real == num.real && imaginary == num.imaginary) {
		return true;
	}
	return false;
}

Complex Complex::addTo(const Complex& num) const {
	double real_part = real + num.real;
	double imaginary_part = imaginary + num.imaginary;
	return Complex(real_part,imaginary_part);
}

Complex Complex::multiplyWith(const Complex& num) const {
	double real_part = real * num.real - imaginary * num.imaginary;
	double imaginary_part = real * num.imaginary + imaginary * num.real;
	return Complex(real_part, imaginary_part);
}

Complex Complex::conjugated() const
{
	return Complex(real, -imaginary);
}

void Complex::conjugate() {
	imaginary *= -1;
}