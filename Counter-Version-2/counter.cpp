#include "counter.h"

static int count = 0;
static int limit;

void initialize(int limit) {
	count = 0;
	::limit = limit;
}

void increment() {
	if (count < limit)
		count++;
}

int get() {
	return count;
}