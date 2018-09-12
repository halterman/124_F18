// timestable1.cpp
// Created 9/12/2018 3:01:55 PM

#include <iostream>

int main() {
	std::cout << "Enter table size: ";
	int size;
	std::cin >> size;
	// Print the rows of the table
	for (int row = 1; row <= size; row++) {
		std::cout << "Row #" << row << '\n';
	}
}
