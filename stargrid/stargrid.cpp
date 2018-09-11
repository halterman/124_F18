// stargrid.cpp
// Created 9/10/2018 3:12:26 PM

#include <iostream>

int main() {
	int width, height;
	std::cin >> width >> height;
	int x = 0;
	while (x < height) {
		int y = 0;
		while (y < width) {
			std::cout << "* ";
			y++;
		}
		std::cout << '\n';
		x++;
	}
}
