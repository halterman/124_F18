// _2018_09_03_DivisionProblem_2.cpp
// Created 9/3/2018 2:49:55 PM

#include <iostream>

int main() {
	int num1, num2;
	std::cout << "Please enter two integers: ";
	std::cin >> num1 >> num2;
	if (num2 != 0) {
		std::cout << num1 << '/' << num2 << " = " << num1 / num2 << '\n';
		std::cout << "Was able to compute\n";
	}
	else {
		std::cout << "Cannot divide by zero!\n";
		std::cout << "Please try to avoid this in the future.\n";
	}
	std::cout << "Complete!\n";
}

