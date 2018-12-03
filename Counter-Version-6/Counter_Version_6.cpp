#include <iostream>
#include <vector>
#include <GL/sgl.hpp>
#include "ChimingCounter.h"

ChimingCounter count{ 5 };

std::vector<Counter *> counters{ new Counter(4),
								 new ChimingCounter(10),
								 new Counter(17),
								 new ChimingCounter(7) };


void draw() {
	sgl::set_color(sgl::BLUE);
	int x = 150;
	for (auto& ctr : counters) {
		sgl::draw_text(std::to_string(ctr->get()), x, 150, 18);
		x += 20;

	}
}

void mouse_released(double, double, sgl::MouseButton) {
	//count.increment();
	sgl::update_window();
}

void key_pressed(int key, double, double) {
	switch (key) {
		case '0':
			counters[0]->increment();
			break;
		case '1':
			counters[1]->increment();
			break;
		case '2':
			counters[2]->increment();
			break;
		case '3':
			counters[3]->increment();
			break;
		case '4':
			counters[4]->increment();
			break;
	}
	sgl::update_window();
}

int main() {
	sgl::create_window("Counter Version 6", 10, 300, 10, 300);
	sgl::set_paint_function(draw);
	sgl::set_mouse_released_function(mouse_released);
	sgl::set_key_pressed_function(key_pressed);


	srand(time(0));

	if (rand() % 2 == 0) {
		counters.push_back(new Counter(3));
	} 
	else {
		counters.push_back(new ChimingCounter(3));
	}
	sgl::run_window();
	std::cout << "Done." << '\n';
	for (auto& p : counters)
		delete p;
}
