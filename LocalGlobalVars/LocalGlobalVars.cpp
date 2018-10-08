// LocalGlobalVars.cpp
// Created 10/8/2018 2:26:11 PM

#include <iostream>

int x;

void process() {
	int x = 0;
	std::cout << x << '\n';
	x++;
}

void retain() {
	static int x = 0;
	std::cout << x << '\n';
	x++;
}

int f(int x);

int main() {
	for (int i = 0; i < 5; i++)
		process();
	for (int i = 0; i < 5; i++)
		retain();
	std::cout << "------------\n";
	std::cout << f(10) << '\n';
}

int f(int x) {
	return x + 2;
}
