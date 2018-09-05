// PointInput.cpp
// Created 8/29/2018 2:12:56 PM

#include <iostream>

int main() {
	std::cout << "Please enter a point: ";
	double x, y;
	char left_paren, comma, right_paren;
	std::cin >> left_paren >> x >> comma >> y >> right_paren;
	std::cout << '(' << x << ", " << y << ")\n";
}
