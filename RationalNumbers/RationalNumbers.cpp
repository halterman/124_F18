// RationalNumbers.cpp
// Created 11/26/2018 2:21:53 PM

#include <iostream>
#include "Rational.h"

int main() {
	Rational fract1{1, 2};
	Rational fract2{5, 10};
	Rational fract3{12, 36};

	//std::cout << fract1.get_numerator() << '/' << fract1.get_denominator() << '\n';

	//std::cout << "fract1 = " << fract1 << '\n';
	//std::cout << "fract2 = " << fract2 << '\n';

	//std::cout << fract1 << " reduces to " << fract1.reduce() << '\n';
	//std::cout << fract2 << " reduces to " << fract2.reduce() << '\n';
	//std::cout << fract3 << " reduces to " << fract3.reduce() << '\n';

	//std::cout << "fract1 = " << fract1 << '\n';
	//std::cout << "fract2 = " << fract2 << '\n';

	//std::cout << "------------------------\n";


	//if (fract1 == fract1)
	//	std::cout << fract1 << " == " << fract1 << '\n';
	//else
	//	std::cout << fract1 << " != " << fract1 << '\n';

	//if (fract1 == fract2)
	//	std::cout << fract1 << " == " << fract2 << '\n';
	//else
	//	std::cout << fract1 << " != " << fract2 << '\n';

	//if (fract1 == fract3)
	//	std::cout << fract1 << " == " << fract3 << '\n';
	//else
	//	std::cout << fract1 << " != " << fract3 << '\n';

	//std::cout << fract1 << " * " << fract3 << " = " 
	//	      << fract1*fract3 << '\n';

	Rational fract4;

	std::cout << fract4 << '\n';
	fract4 = fract1;
	std::cout << fract4 << '\n';

	Rational fract5{ fract1 };
	std::cout << "**** " << fract5 << '\n';

	Rational fract6{ 3, 6 };
	std::cout << ">>>>>>>>>>>>>\n";
	std::cout << std::boolalpha << (fract1 == fract6) << '\n';
	std::cout << ">>>>>>>>>>>>>\n";

	Rational *rp;
	rp = &fract6;
	std::cout << *rp << " reduces to " << (*rp).reduce() << '\n';
	std::cout << *rp << " reduces to " << rp->reduce() << '\n';

	std::cout << "All done!\n";

}
