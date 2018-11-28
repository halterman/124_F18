#include "Rational.h"


// Returns the greatest common divisor of m and n.
int gcd(int m, int n) {
	while (n != 0) {
		int t = m % n;
		m = n;
		n = t;
	}
	return m;
}

Rational::Rational(int n, int d): numerator(n), denominator(d) {
	if (d == 0) {
		std::cout << "Attempt to create an illegal rational number\n";
		exit(-1);
	}
}

Rational::Rational(): Rational(0, 1) {}

Rational::Rational(const Rational& other) 
	        : Rational(other.numerator, other.denominator) {
	std::cout << "making a copy of a rational nummber\n";
}

Rational::~Rational() {
	std::cout << "Destroying a rational object\n";
}

int Rational::get_numerator() const {
	return numerator;
}
int Rational::get_denominator() const {
	return denominator;
}

Rational Rational::reduce() const {
	int common_divisor = gcd(numerator, denominator);
	return { numerator / common_divisor, denominator / common_divisor };
}


Rational& Rational::operator=(const Rational& other) {
	numerator = other.numerator;
	denominator = other.denominator;
	std::cout << "Doing assignment\n";
	return *this;
}


std::ostream& operator<<(std::ostream& os, const Rational& r) {
	os << r.get_numerator() << '/' << r.get_denominator();
	return os;
}

bool operator==(const Rational& r1, const Rational& r2) {
	Rational reduced1 = r1.reduce();
	Rational reduced2 = r2.reduce();
	return reduced1.get_numerator() == reduced2.get_numerator()
		&& reduced1.get_denominator() == reduced2.get_denominator();
}

Rational operator*(const Rational& r1, const Rational& r2) {
	Rational result{ r1.get_numerator()*r2.get_numerator(),
					r1.get_denominator() * r2.get_denominator() };
	return result.reduce();
}