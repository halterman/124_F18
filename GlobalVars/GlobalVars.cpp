// GlobalVars.cpp
// Created 10/1/2018 2:30:48 PM

#include <iostream>

int y = 12;

void process(int n) {
	std::cout << "Starting to run process with n = " << n << '\n';
	std::cout << "Starting to run process with y = " << y << '\n';
	n = 10;
	y = 20;
	std::cout << "Finishing process with n = " << n << '\n';
	std::cout << "Finishing process with y = " << y << '\n';
}

void twice(int& n) {
	n *= 2;
}

int main() {
	//process(7);
	int x = 5;
	std::cout << "Going to call process with x = " << x << '\n';
	std::cout << "Going to call process with y = " << y << '\n';
	process(x);
	std::cout << "Finished calling process with x = " << x << '\n';
	std::cout << "Finished calling process with y = " << y << '\n';

	std::cout << "Going to call twice with x = " << x << '\n';
	twice(x);
	std::cout << "Finished calling twice with x = " << x << '\n';
}