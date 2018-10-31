// VectorSort.cpp
// Created 10/31/2018 2:30:51 PM

#include <iostream>
#include <vector>
#include <algorithm>

// Creates a vector of n pseudorandom integers in the
// range 0...max - 1.
std::vector<int> make_vector(int n, int max) {
	std::vector<int> result(n);
	for (int i = 0; i < n; i++)
		result[i] = rand() % max;
	return result;
}

std::ostream& operator<<(std::ostream& os, const std::vector<int>& vec) {
	os << '{';
	int n = vec.size();
	if (n > 0) {
		os << vec[0];
		for (int i = 1; i < n; i++)
			os << ", " << vec[i];
	}
	os << '}';
	return os;
}

void sort(std::vector<int>& vec) {
	int n = vec.size();
	for (int i = 0; i < n - 1; i++) {
		int smallest = i;
		for (int j = i + 1; j < n; j++) {
			if (vec[j] < vec[smallest]) {
				smallest = j;
			}
		}
		if (i != smallest) {
			int temp = vec[i];
			vec[i] = vec[smallest];
			vec[smallest] = temp;
		}
	}
}

int main() {
	srand(42);
	auto my_list = make_vector(20, 100);

	std::cout << my_list << '\n';
	//sort(my_list);
	std::sort(my_list.begin(), my_list.end());
	std::cout << my_list << '\n';
}
