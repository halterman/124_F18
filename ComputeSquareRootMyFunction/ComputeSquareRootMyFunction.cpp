// ComputeSquareRootMyFunction.cpp
// Created 9/26/2018 2:55:43 PM

// ComputeSquareRootTheHardWay.cpp
// Created 9/26/2018 2:24:22 PM

#include <iostream>

double my_sqrt(double n) {
	double root = 1;
	double diff = root * root - n;
	diff = (diff >= 0.0) ? diff : -diff;
	while (diff > 0.00000001) {
		root = (root + n / root) / 2;
		diff = root * root - n;
		diff = (diff >= 0.0) ? diff : -diff;
	}
	return root;
}

int main() {
	double number;
	std::cout << "Please enter a number: ";
	std::cin >> number;

	double root = my_sqrt(number);

	std::cout << "The [my] square root of " << number << " is "
		<< root << '\n';
}