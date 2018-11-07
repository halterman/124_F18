// Quiz8_part_2.cpp
// Created 11/5/2018 2:45:25 PM

#include <iostream>
#include <vector>
#include <string>

bool no_negatives(const std::vector<int>& vec) {
	// Version 1
	//for (size_t i = 0; i < vec.size(); i++)
	//	if (vec[i] < 0)
	//		return false;
	//return true;

	// Version 2
	for (int elem : vec)
		if (elem < 0)
			return false;
	return true;
}

void test(std::string message,  bool expected, bool actual) {
	std::cout << std::boolalpha << message << "   ";
	if (expected != actual) {
		std::cout << "**** Expected: " << expected 
			      << "  Actual: " << actual << '\n';
	}
	else
		std::cout << "Pass\n";
}

int main() {
	std::vector<int> vec{4, -1, 2, 17, 8};

	test("Test #1", false, no_negatives(vec));

	test("Test #2", true, no_negatives({1, 2, 3, 4}));
	test("Test #3", true, no_negatives({}));
	test("Test #4", true, no_negatives({9}));
	test("Test #5", false, no_negatives({-9}));
	test("Test #6", false, no_negatives({-9, 8, 4, 5}));
	test("Test #7", false, no_negatives({9, 8, 4, -5}));
	test("Test #8", false, no_negatives({-9, -8, -4, -5}));

    
}
