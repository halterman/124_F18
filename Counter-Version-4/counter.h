#ifndef COUNTER_H_
#define COUNTER_H_

class Counter {
	int count;
	int limit;
public:
	Counter(int limit);
	void increment();
	int get();
};


#endif
