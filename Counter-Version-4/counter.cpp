#include "counter.h"


Counter::Counter(int limit) {
	count = 0;
	this->limit = limit;
}

void Counter::increment() {
	if (count < limit)
		count++;
}

int Counter::get() {
	return count;
}