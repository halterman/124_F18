// Counter_Version_1.cpp
// Created 11/12/2018 2:06:53 PM

#include <iostream>
#include <GL/sgl.hpp>

int count = 0;
int limit = 10;

void draw() {
	sgl::set_color(sgl::BLUE);
	sgl::draw_text(std::to_string(count), 150, 150, 18);
		
}

void mouse_released(double x, double y, sgl::MouseButton) {
	if (count < limit) 
		count++;
	sgl::update_window();
}

int main() {
	sgl::create_window("Counter Version 1", 10, 300, 10, 300);
	sgl::set_paint_function(draw);
	sgl::set_mouse_released_function(mouse_released);
	sgl::run_window();
}