// ArrayPlay.cpp
// Created 11/7/2018 2:29:48 PM

#include <iostream>

void print(const int arr[], int n) {
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << ' ';
	std::cout << '\n';
}

void print2(const int *arr, int n) {
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << ' ';
	std::cout << '\n';
}

void print3(const int *arr, int n) {
	for (int i = 0; i < n; i++)
		std::cout << *(arr + i) << ' ';
	std::cout << '\n';
}

void print4(const int *arr, int n) {
	while (n > 0) {
		std::cout << *arr << ' ';
		arr++;
		n--;
	}
	std::cout << '\n';
}

void print5(const int *arr, int n) {
	while (n-- > 0)
		std::cout << *arr++ << ' ';
	std::cout << '\n';
}

int main() {
	int a[] = { 10, 20, 30, 40, 50 };

	std::cout << *a << '\n';
	std::cout << a[0] << '\n';
	std::cout << *(a + 1) << '\n';
	std::cout << a[1] << '\n';

	print(a, 5);
	print2(a, 5);
	print3(a, 5);
	print4(a, 5);
	print5(a, 5);

    
}
