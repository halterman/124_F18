#include <iostream>
#include <GL/sgl.hpp>
#include "counter.h"

Counter count{ 5 };

void draw() {
	sgl::set_color(sgl::BLUE);
	sgl::draw_text(std::to_string(count.get()), 150, 150, 18);

}

void mouse_released(double, double, sgl::MouseButton) {
	count.increment();
	sgl::update_window();
}

void f() {
	Counter c1{ 99 };
}

int main() {
	f();
	sgl::create_window("Counter Version 4", 10, 300, 10, 300);
	sgl::set_paint_function(draw);
	sgl::set_mouse_released_function(mouse_released);
	sgl::run_window();
	std::cout << "Done." << '\n';
}
