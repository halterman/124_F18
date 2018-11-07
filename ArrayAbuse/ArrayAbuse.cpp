// ArrayAbuse.cpp
// Created 11/7/2018 2:44:09 PM

#include <iostream>

void print(const int arr[], int n) {
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << ' ';
	std::cout << '\n';
}

int main() {
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 10, 20, 30, 40, 50 };
	int c[] = { 100, 200, 300, 400, 500 };

	print(a, 5);
	print(b, 5);
	print(c, 5);

	std::cout << a << ' ' << b << ' ' << c << '\n';

	std::cout << "--------------------\n";
	int x;
	std::cin >> x;
	c[6] = 77;
	c[x] = 99;

	print(a, 5);
	print(b, 5);
	print(c, 5);
}
