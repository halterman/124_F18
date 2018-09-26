// ComputeSquareRootTheHardWay.cpp
// Created 9/26/2018 2:24:22 PM

#include <iostream>

int main() {
	double number;
	std::cout << "Please enter a number: ";
	std::cin >> number;

	double root = 1;
	double diff = root * root - number;
	diff = (diff >= 0.0) ? diff : -diff;
	while (diff > 0.00000001) {
		root = (root + number / root) / 2;
		diff = root * root - number;
		diff = (diff >= 0.0) ? diff : -diff;
	}


	std::cout << "The square root of " << number << " is " 
		      << root << '\n';
}
