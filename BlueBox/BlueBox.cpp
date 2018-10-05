// BlueBox.cpp
// Created 10/3/2018 2:16:30 PM

#include <iostream>
#include <GL/sgl.hpp>

double current_x = 50;
double current_y = 50;

void draw() {
	sgl::set_color(sgl::BLUE);
	sgl::fill_rectangle(current_x - 50, current_y - 37.5, 100, 75);

	sgl::set_color(sgl::RED);
	sgl::set_line_width(5);
	sgl::draw_line(0, 0, current_x, current_y);
	sgl::set_color(sgl::GREEN);
	sgl::set_line_width(1);
	sgl::draw_line(0, 0, current_x + 50, current_y - 37.5);
}

void mouse_pressed(double x, double y, sgl::MouseButton) {
	std::cout << "Mouse pressed at " << x << ", " << y << '\n';
	current_x = x;
	current_y = y;
	sgl::update_window();
}

void mouse_released(double x, double y, sgl::MouseButton) {
	std::cout << "Mouse up\n";
}

int main() {
	sgl::create_window("Blue Box", 10, 600, 10, 400);
	sgl::set_paint_function(draw);
	sgl::set_mouse_pressed_function(mouse_pressed);
	sgl::set_mouse_released_function(mouse_released);
	sgl::run_window();
}
