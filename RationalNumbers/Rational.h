#pragma once

#include <iostream>

// Used for making immutable fraction objects
class Rational {
	int numerator;
	int denominator;
public:
	Rational(int n, int d);
	Rational();
	Rational(const Rational& other);
	~Rational();
	int get_numerator() const;
	int get_denominator() const;
	Rational reduce() const;
	Rational& operator=(const Rational& other);
};

std::ostream& operator<<(std::ostream& os, const Rational& r);

bool operator==(const Rational& r1, const Rational& r2);

Rational operator*(const Rational& r1, const Rational& r2);

