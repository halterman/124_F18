// _2018_09_03_DivisionProblem.cpp
// Created 9/3/2018 2:36:35 PM

#include <iostream>

int main() {
	int num1, num2;
	std::cout << "Please enter two integers: ";
	std::cin >> num1 >> num2;
	if (num2 != 0) {
		std::cout << num1 << '/' << num2 << " = " << num1 / num2 << '\n';
		std::cout << "Was able to compute\n";
	}
	std::cout << "Complete!\n";
}
