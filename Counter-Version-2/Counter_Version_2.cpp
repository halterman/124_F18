// Counter_Version_2.cpp
// Created 11/12/2018 2:23:18 PM

#include <iostream>
#include <GL/sgl.hpp>
#include "counter.h"

void draw() {
	sgl::set_color(sgl::BLUE);
	sgl::draw_text(std::to_string(get()), 150, 150, 18);

}

void mouse_released(double x, double y, sgl::MouseButton) {
	increment();
	sgl::update_window();
}

int main() {
	initialize(10);
	sgl::create_window("Counter Version 1", 10, 300, 10, 300);
	sgl::set_paint_function(draw);
	sgl::set_mouse_released_function(mouse_released);
	sgl::run_window();
}
