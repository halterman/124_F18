// miles_feet_inches_to_inches.cpp
// Created 8/27/2018 2:49:08 PM

#include <iostream>

int main() {
	std::cout << "Please enter the miles, feet, and inches: ";
	int miles, feet, inches;
	std::cin >> miles >> feet >> inches;

	const int InchesPerFoot = 12, FeetPerMile = 5280;
	int total_inches = miles * FeetPerMile * InchesPerFoot
		               + feet * InchesPerFoot + inches;
	std::cout << "Total inches equals " << total_inches << '\n';
    
}
