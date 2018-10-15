// count_primes.cpp
// Created 10/15/2018 2:07:09 PM

#include <iostream>

// Returns true if n is a prime number; otherwise, returns false
bool is_prime(int n) {
	for (int ftr = 2; ftr*ftr <= n; ftr++)
		if (n % ftr == 0)
			return false;
	return true;
}

// Returns the number of primes greater than or equal to start
// but less than finish.  Returns 0 if start is greater than or
// equal to finish.
int count_primes(int start, int finish) {
	int count = 0;
	for (int i = start; i < finish; i++)
		if (is_prime(i))
			count++;
	return count;
}

// Returns the number of primes greater than or equal to start
// but less than finish.  Returns 0 if start is greater than or
// equal to finish.
int count_primes2(int start, int finish) {
	if (start >= finish)
		return 0;
	return ((is_prime(start)) ? 1 : 0) + count_primes2(start + 1, finish);
}

// Returns the number of primes greater than or equal to start
// but less than finish.  Returns 0 if start is greater than or
// equal to finish.
int count_primes3(int start, int finish) {
	if (start >= finish)
		return 0;
	int count_rest = count_primes3(start + 1, finish);
	if (is_prime(start))
		count_rest++;
	return count_rest;
}

int main() {
	for (int i = 2; i < 100; i++)
		if (is_prime(i))
			std::cout << i << ' ';
	std::cout << '\n';
	std::cout << count_primes(50, 100) << '\n';
	std::cout << count_primes2(50, 100) << '\n';
	std::cout << count_primes3(5, 12) << '\n';
}
