#ifndef COUNTER_H_
#define COUNTER_H_

class Counter {
	int count;
	int limit;
public:
	void initialize(int limit);
	void increment();
	int get();
};


#endif