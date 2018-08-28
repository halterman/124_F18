// ConstantTest.cpp
// Created 8/27/2018 2:18:27 PM

#include <iostream>

int main() {
	const int number = 3;
	std::cout << "number = " << number << '\n';
	// This next statement is illegal because number is a constant
	number = 10;
	std::cout << "number = " << number << '\n';
}
