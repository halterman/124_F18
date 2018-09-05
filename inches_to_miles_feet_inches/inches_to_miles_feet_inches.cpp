// inches_to_miles_feet_inches.cpp
// Created 8/27/2018 3:04:50 PM

#include <iostream>

int main() {
	std::cout << "Please enter the inches: ";
	int miles, feet, inches;
	std::cin >> inches;
	const int InchesPerFoot = 12, FeetPerMile = 5280,
		      InchesPerMile = InchesPerFoot * FeetPerMile;

	miles = inches / InchesPerMile;
	inches = inches % InchesPerMile;
	feet = inches / InchesPerFoot;
	inches = inches % InchesPerFoot;
	
	std::cout << miles << " mi, " << feet << " ft, " << inches << " in\n";

}
