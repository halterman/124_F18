#pragma once

#include <iostream>

class Rational {
	int numerator;
	int denominator;
public:
	Rational(int n, int d);
	int get_numerator() const;
	int get_denominator() const;
	Rational reduce() const;
};

std::ostream& operator<<(std::ostream& os, const Rational& r);

bool operator==(const Rational& r1, const Rational& r2);

Rational operator*(const Rational& r1, const Rational& r2);

