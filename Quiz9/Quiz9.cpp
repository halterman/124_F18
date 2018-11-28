// Quiz9.cpp
// Created 11/28/2018 3:05:46 PM

#include <iostream>
#include "widget.h"

// Client code
void do_it() {
	Widget w1, w2{ 5 };
	std::cout << w1.get() << '\n'; // 1.
	std::cout << w2.get() << '\n'; // 2.
	for (int i = 0; i < 10; i++)
		w1.up();
	w2.down();
	w2.down();
	std::cout << w1.get() << '\n'; // 3.
	std::cout << w2.get() << '\n'; // 4. 
}

void print_it() {
	Widget wid1;
	Widget wid2{ 102 };

	for (int i = 0; i < 100; i++)
		wid1.up();

	wid2.down();
	wid2.down();

	std::cout << wid1.get() << " " << wid2.get() << '\n';
}

int main() {
	do_it();
	std::cout << "-------------------\n";
	print_it();
}
