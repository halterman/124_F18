// imprecise5th.cpp
// Created 8/27/2018 1:45:54 PM

#include <iostream>
int main() {
	double one = 1.0,
		   one_fifth = 1.0 / 5.0,
		   zero = one - one_fifth - one_fifth - one_fifth
		              - one_fifth - one_fifth;
	std::cout << "one = " << one << ", one_fifth = " << one_fifth
		      << ", zero = " << zero << '\n';
	int x, y;
	std::cout << "Please enter two numbers: ";
	std::cin >> x >> y;
	std::cout << x << "/" << y << " = " << x / y << '\n';
	std::cout << "all done\n";
	x = x + 1;
	x++;
	++x;
}
