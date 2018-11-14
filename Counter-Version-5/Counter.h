#pragma once
class Counter {
	int count;
	const int limit;
public:
	Counter(int limit);
	~Counter();
	void increment();
	int get() const;
};

