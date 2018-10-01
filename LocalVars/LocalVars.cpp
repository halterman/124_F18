// LocalVars.cpp
// Created 10/1/2018 2:21:43 PM

#include <iostream>

void process(int n) {
	std::cout << "Starting to run process with n = " << n << '\n';
	n = 10;
	std::cout << "Finishing process with n = " << n << '\n';
}

int main() {
	//process(7);
	int x = 5;
	std::cout << "Going to call process with x = " << x << '\n';
	process(x);
	std::cout << "Finished calling process with x = " << x << '\n';
}
