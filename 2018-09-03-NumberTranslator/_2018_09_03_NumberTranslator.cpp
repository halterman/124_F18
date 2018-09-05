// _2018_09_03_NumberTranslator.cpp
// Created 9/3/2018 3:05:05 PM

#include <iostream>

int main() {
	int number;
	std::cout << "Please enter a number in the range 1...5, inclusive: ";
	std::cin >> number;
	if (number == 1)
		std::cout << "one\n";
	else if (number == 2) 
		std::cout << "two\n";
	else if (number == 3) 
		std::cout << "three\n";
	else if (number == 4) 
		std::cout << "four\n";
	else if (number == 5) 
		std::cout << "five\n";
	else
		std::cout << "Number out of range\n";
}
