// _2018_09_03_high_low.cpp
// Created 9/3/2018 3:15:18 PM

#include <iostream>

int main() {
	std::cout << "Please enter an integer in the range 1...5, inclusive: ";
	int input;
	std::cin >> input;
	if (input > 0 && input < 6) {
		std::cout << "Just right\n";
	}
	else {
		if (input < 1)
			std::cout << "Too low\n";
		else
			std::cout << "Too high\n";
	}
}
