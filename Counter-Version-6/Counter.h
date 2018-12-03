#pragma once

class Counter {
	int count;
	const int limit;
public:
	Counter(int limit);
	virtual ~Counter();
	virtual void increment();
	int get() const;
};

