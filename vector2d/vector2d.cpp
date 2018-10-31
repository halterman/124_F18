// vector2d.cpp
// Created 10/31/2018 3:02:49 PM

#include <iostream>
#include <vector>

using Matrix = std::vector<std::vector<int>>;

std::ostream& operator<<(std::ostream& os, const Matrix& mat) {
	for (size_t row = 0; row < mat.size(); row++) {
		// Print a row of the matrix
		for (size_t column = 0; column < mat[row].size(); column++) {
			os << mat[row][column] << ' ';
		}
		os << '\n';
	}
	return os;
}

int main() {
	Matrix table{ {2, 0, 5}, 
	              {1, 1, 6}, 
	              {3, 1, 3}, 
	              {0, 8, 7} };

	std::cout << table[1][2] << '\n';
	std::cout << table << '\n';


    
}
