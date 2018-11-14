#include "Counter.h"
#include <iostream>

Counter::Counter(int limit): count(0), limit(limit) {
	std::cout << "Making a counter with limit "
		      << limit << '\n';
}

Counter::~Counter() {
	std::cout << "Destroying a counter with limit "
		      << limit << '\n';

}

void Counter::increment() {
	if (count < limit)
		count++;
}

int Counter::get() const {
	return count;
}