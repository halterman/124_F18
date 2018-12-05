#include <iostream>

class Counter {
	int count;
	const int limit;
public:
	Counter(int limit) : count(0), limit(limit) {}
	virtual void increment() {
		if (count < limit)
			count++;
	}
	int get() const {
		return count;
	}
};

class ChimingCounter : public Counter {
public:
	ChimingCounter(int limit) : Counter(limit) {}
	void increment() override {
		Counter::increment();
		std::cout << '\a';
	}
};

int main() {
	Counter ctr{ 3 };
	std::cout << ctr.get() << '\n';  // Prints 0
	ctr.increment();                 // Silence
	std::cout << ctr.get() << '\n';  // Prints 1
	ctr.increment();                 // Silence
	std::cout << ctr.get() << '\n';  // Prints 2
	ctr.increment();                 // Silence
	std::cout << ctr.get() << '\n';  // Prints 3
	ctr.increment();                 // Silence
	std::cout << ctr.get() << '\n';  // Prints 3
	ctr.increment();                 // Silence
	std::cout << ctr.get() << '\n';  // Prints 3

	ChimingCounter cc{ 2 };
	std::cout << cc.get() << '\n';   // Prints 0
	cc.increment();                  // Chimes
	std::cout << cc.get() << '\n';   // Prints 1
	cc.increment();                  // Chimes
	std::cout << cc.get() << '\n';   // Prints 2
	cc.increment();                  // Chimes
	std::cout << cc.get() << '\n';   // Prints 2
	cc.increment();                  // Chimes
	std::cout << cc.get() << '\n';   // Prints 2
}
