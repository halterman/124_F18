#include <iostream>

int main() {
	std::cout << "Please enter any number of numbers, Q quits: ";
	double input, sum = 0.0;
	int count = 0;
	while (std::cin >> input) {
		sum += input;
		count++;
	}
	if (count == 0)
		std::cout << "No numbers to average\n";
	else
		std::cout << "The average of the numbers is "
		<< sum / count << ".\n";
}
