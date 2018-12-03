#include "ChimingCounter.h"
#include <iostream>

ChimingCounter::ChimingCounter(int limit) : Counter(limit) {}

void ChimingCounter::increment() {
	Counter::increment();
	std::cout << '\a' << '\n';
}
