// _2018_09_05_NumToBinaryIterative.cpp
// Created 9/5/2018 2:53:21 PM


#include <iostream>
#include <iomanip>

int main() {

	//int count = 10;
	//while (count > 0) {
	//	std::cout << "count = " << count << '\n';
	//	count--;
	//}

	int count = 0;
	while (count < 1024) {
		int input = count;
		std::cout << std::setw(4) << count << " = ";
		if (0 <= input && input <= 1023) {
			if (input >= 512) {
				std::cout << 1;
				input %= 512;
			}
			else
				std::cout << 0;
			if (input >= 256) {
				std::cout << 1;
				input %= 256;
			}
			else
				std::cout << 0;
			if (input >= 128) {
				std::cout << 1;
				input %= 128;
			}
			else
				std::cout << 0;
			if (input >= 64) {
				std::cout << 1;
				input %= 64;
			}
			else
				std::cout << 0;
			if (input >= 32) {
				std::cout << 1;
				input %= 32;
			}
			else
				std::cout << 0;
			if (input >= 16) {
				std::cout << 1;
				input %= 16;
			}
			else
				std::cout << 0;
			if (input >= 8) {
				std::cout << 1;
				input %= 8;
			}
			else
				std::cout << 0;
			if (input >= 4) {
				std::cout << 1;
				input %= 4;
			}
			else
				std::cout << 0;
			if (input >= 2) {
				std::cout << 1;
				input %= 2;
			}
			else
				std::cout << 0;
			std::cout << input << '\n';

		}
		count++;
	}

}

