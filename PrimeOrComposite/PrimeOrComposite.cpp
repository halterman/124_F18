// PrimeOrComposite.cpp
// Created 9/17/2018 2:38:10 PM

#include <iostream>

int main() {
	// Get number from user
	std::cout << "Please enter an integer: ";
	int input;
	std::cin >> input;

	// Determine if the number is prime or composite
	//int factor_count = 0;
	//for (int i = 2; i < input; i++) {
	//	if (input % i == 0)
	//		factor_count++;
	//}
	bool prime = true;
	for (int i = 2; i < input; i++) {
		if (input % i == 0) {
			prime = false;
		}
	}


	// Report result to user
	//std::cout << input << " is ";
	//if (factor_count > 0) 
	//	std::cout << "composite\n";
	//else
	//	std::cout << "prime\n";
	std::cout << input << " is ";
	if (prime) 
		std::cout << "prime\n";
	else
		std::cout << "composite\n";
    
}
