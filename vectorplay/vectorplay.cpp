// vectorplay.cpp
// Created 10/24/2018 2:57:13 PM

#include <iostream>
#include <vector>

// Print the contents of the integer vector vec.
void print(const std::vector<int>& vec) {
	std::cout << '{';
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << ' ';
	std::cout << "}\n";
}

// Print the contents of the integer vector vec.
void print2(std::vector<int> vec) {
	std::cout << '{';
	for (int elem : vec)
		std::cout << elem << ' ';
	std::cout << "}\n";
}


// Print the contents of the integer vector vec.
void make_n(std::vector<int>& vec, int n) {
	for (int& elem : vec)
		elem = n;
}

// Print the contents of the integer vector vec.
void make2_n(std::vector<int>& vec, int n) {
	for (size_t i = 0; i < vec.size(); i++)
		vec[i] = n;
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

// Creates a vector of n pseudorandom integers in the
// range 0...max - 1.
std::vector<int> make_vector(int n, int max) {
	std::vector<int> result(n);
	for (int i = 0; i < n; i++)
		result[i] = rand() % max;
	return result;
}

int main() {
	srand(42);
	std::vector<int> list;

	// Print the contents of the list object
	//print(list);
	//print2(list);

	list.push_back(10);
	list.push_back(20);
	list.push_back(30);
	list.push_back(40);
    
	// Print again the contents of the list object
	print(list);
	//print2(list);

	//make_n(list, 44);
	//print2(list);

	std::cout << list.at(3) << '\n';

	std::vector<int> my_vector = make_vector(20, 200);
	//print(my_vector);
	std::cout << my_vector << '\n';

	std::vector<int> l1 {};
	std::vector<int> l2 {100, 150, 200, 250};
	std::vector<int> l3 {9};

	std::cout << "l1 = " << l1 << " and l2 = " << l2 << '\n';
	std::cout << "l3 = " << l3 << '\n';

	std::cout << "-----------------------------\n";
	std::cout << my_vector << '\n';
	operator<<(std::cout, my_vector) << '\n';

	std::cout << "-----------------------------\n";
	auto my_vector2 = make_vector(5, 11);
	std::cout << my_vector2 << '\n';
}
