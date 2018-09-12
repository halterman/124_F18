// tablestable2.cpp
// Created 9/12/2018 3:05:34 PM

#include <iostream>

int main() {
	std::cout << "Enter table size: ";
	int size;
	std::cin >> size;
	// Print the rows of the table
	for (int row = 1; row <= size; row++) {
		for (int column = 1; column <= size; column++) {
			std::cout << row * column << ' ';
		}
		std::cout << '\n';
	}
}
