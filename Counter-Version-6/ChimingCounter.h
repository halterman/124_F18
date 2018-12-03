#pragma once

#include "counter.h"

class ChimingCounter : public Counter {
public:
	ChimingCounter(int limit);
	void increment() override;
};
