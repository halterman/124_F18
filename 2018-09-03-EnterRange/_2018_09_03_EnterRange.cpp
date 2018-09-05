// _2018_09_03_EnterRange.cpp
// Created 9/3/2018 2:58:47 PM

#include <iostream>

int main() {
	std::cout << "Please enter an integer in the range 1...5, inclusive: ";
	int input;
	std::cin >> input;
	/*if (input > 0) {
		if (input < 6) {
			std::cout << "You entered a valid number\n";
		}
	}*/
	if (input > 0 && input < 6) {
		std::cout << "You entered a valid number\n";
	}
}
