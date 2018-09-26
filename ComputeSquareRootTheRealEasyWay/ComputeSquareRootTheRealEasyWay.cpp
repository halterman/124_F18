// ComputeSquareRootTheRealEasyWay.cpp
// Created 9/26/2018 2:45:24 PM

// ComputeSquareRootTheHardWay.cpp
// Created 9/26/2018 2:24:22 PM

#include <iostream>
#include <cmath>

int main() {
	double number;
	std::cout << "Please enter a number: ";
	std::cin >> number;

	double root = sqrt(number);

	std::cout << "The square root of " << number << " is "
		<< root << '\n';
}
