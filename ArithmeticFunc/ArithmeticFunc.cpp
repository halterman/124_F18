// ArithmeticFunc.cpp
// Created 10/1/2018 2:49:44 PM

#include <iostream>
#include <functional>

int do_eval(std::function<int(int, int)> f, int n1, int n2) {
	return f(n1, n2);
}

int add(int x, int y) {
	return x + y;
}

int multiply(int x, int y) {
	return x * y;
}

int goofy(int a, int b) {
	std::cout << "I'm goooooofy!\n";
	return 0;
}


void do_add() {
	int n1, n2;
	std::cin >> n1 >> n2;
	//std::cout << add(n1, n2) << '\n';
	std::cout << do_eval(add, n1, n2) << '\n';
}

void do_multiply() {
	int n1, n2;
	std::cin >> n1 >> n2;
	//std::cout << multiply(n1, n2) << '\n';
	std::cout << do_eval(multiply, n1, n2) << '\n';
}


int main() {
	char command;
	bool done = false;
	int x = 5;
	do {
		std::cout << "A)dd   M)ultiply   Q)uit ==> ";
		std::cin >> command;
		switch (command) {
			case 'A':
			case 'a':
				do_add();
				break;
			case 'M':
			case 'm':
				do_multiply();
				break;
			case 'Q':
			case 'q':
				done = true;
		}
	} while (!done);

	std::cout << do_eval(goofy, 10, 20) << '\n';

    
}
