#ifndef COUNTER_H_
#define COUNTER_H_

class Counter {
	int count;
	int limit;
public:
	Counter(int limit) {
		count = 0;
		this->limit = limit;
	}
	void increment() {
		if (count < limit)
			count++;
	}
	int get() {
		return count;
	}
};


#endif
