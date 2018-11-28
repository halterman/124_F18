// RationalNumbers.cpp
// Created 11/26/2018 2:21:53 PM

#include <iostream>
#include "Rational.h"

int main() {
	Rational fract1{1, 2};
	Rational fract2{5, 10};
	Rational fract3{12, 36};

	std::cout << fract1.get_numerator() << '/' << fract1.get_denominator() << '\n';

	std::cout << "fract1 = " << fract1 << '\n';
	std::cout << "fract2 = " << fract2 << '\n';

	std::cout << fract1 << " reduces to " << fract1.reduce() << '\n';
	std::cout << fract2 << " reduces to " << fract2.reduce() << '\n';
	std::cout << fract3 << " reduces to " << fract3.reduce() << '\n';

	std::cout << "fract1 = " << fract1 << '\n';
	std::cout << "fract2 = " << fract2 << '\n';

	std::cout << "------------------------\n";


	if (fract1 == fract1)
		std::cout << fract1 << " == " << fract1 << '\n';
	else
		std::cout << fract1 << " != " << fract1 << '\n';

	if (fract1 == fract2)
		std::cout << fract1 << " == " << fract2 << '\n';
	else
		std::cout << fract1 << " != " << fract2 << '\n';

	if (fract1 == fract3)
		std::cout << fract1 << " == " << fract3 << '\n';
	else
		std::cout << fract1 << " != " << fract3 << '\n';

	std::cout << fract1 << " * " << fract3 << " = " 
		      << fract1*fract3 << '\n';
	std::cout << std::boolalpha << true << " " << false << '\n';
}
