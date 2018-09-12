// _2018_09_12_CountTo10.cpp
// Created 9/12/2018 2:29:43 PM

#include <iostream>

int main() {
	int n = 1;
	while (n <= 10) {
		std::cout << n << ' ';
		n++;
	}
	std::cout << "\n---------------------------\n";
	for (int i = 1; i <= 10; i++)
		std::cout << i << ' ';
	std::cout << "\n---------------------------\n";

	for (int i = 0; i <= 100; i += 10)
		std::cout << i << ' ';
	std::cout << "\n---------------------------\n";

	for (int i = 1024; i >= 1; i /= 2)
		std::cout << i << ' ';
	std::cout << "\n---------------------------\n";

	//  Note that i declared in the for statement is not
	//  available outside the for statement.
	//std::cout << i << '\n';

	int val = 1;
	for (; val <= 5; ) {
		std::cout << val << ' ';
		val += 2;
	}
	std::cout << "\n---------------------------\n";

// Don't do this!
	std::cout << "Spaghetti code result: " << '\n';
	int val2 = 1;
top:if (val2 > 5)
		goto end;
	std::cout << val2 << ' ';
	val2 += 2;
	goto top;
end:


	std::cout << "\n---------------------------\n";
    
}
