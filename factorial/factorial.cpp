// factorial.cpp
// Created 10/8/2018 3:04:33 PM

#include <iostream>
#include <iomanip>
#include "MyMath.h"

int my_factorial(int n) {
	int product = 1;
	for (int i = n; i > 0; i--)
		product *= i;
	return product;
}

int main() {
	for (int i = 0; i <= 10; i++) {
		std::cout << std::setw(3) << i 
			      << std::setw(15) << factorial(i) 
			      << std::setw(15) << my_factorial(i) << '\n';
	}
}
