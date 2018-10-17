// quiz7.cpp
// Created 10/17/2018 3:12:31 PM

#include <iostream>
int f(int m, int n) {
	if (n == 0)
		return m;
	else
		return f(n, m % n);
}

int g(int m, int n) {
	while (n != 0) {
		int t = m % n;
		m = n;
		n = t;
	}
	return m;
}


int main() {
	int x, y;
	std::cin >> x >> y;
	std::cout << f(x, y) << '\n';

	for (int i = 1; i < 100; i++) {
		for (int j = 1; j < 100; j++) {
			if (f(i, j) != g(i, j)) {
				std::cout << "i = " << i << ", j = " << j << '\n';
			}
			else {
				std::cout << '.';
			}
		}
	}
}
