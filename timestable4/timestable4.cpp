// timestable4.cpp
// Created 9/17/2018 2:16:52 PM

#include <iostream>
#include <iomanip>

int main() {
	std::cout << "Enter table size: ";
	int size;
	std::cin >> size;
	// Print the column titles
	std::cout << "     ";
	for (int column = 1; column <= size; column++) {
		std::cout << std::setw(4) << column;
	}
	std::cout << '\n';
	// Display a line
	std::cout << "    +";
	for (int column = 1; column <= size; column++) {
		std::cout << "----";
	}
	std::cout << '\n';
	// Print the rows of the table
	for (int row = 1; row <= size; row++) {
		std::cout << std::setw(3) << row << " |" ;
		for (int column = 1; column <= size; column++) {
			std::cout << std::setw(4) << row * column;
		}
		std::cout << '\n';
	}
}
