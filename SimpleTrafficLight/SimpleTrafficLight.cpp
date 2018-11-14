// Simple example showing how to draw lines with the SGL library

#include <GL/sgl.hpp>  // Use #include "sgl.hpp" on macOS

enum class Color { Red, Yellow, Green };

class LightController {
	Color color;
public:
	LightController() : color(Color::Red) {}
	void change() {
		switch (color) {
			case Color::Red:
				color = Color::Green;
				break;
			case Color::Green:
				color = Color::Yellow;
				break;
			case Color::Yellow:
				color = Color::Red;
				break;
		}
	}
	Color get() const {
		return color;
	}
};

LightController light;

void paint() {
	// Draw the light's frame
	sgl::set_color(sgl::LIGHT_GRAY);
	sgl::fill_rectangle(50, 25, 200, 550);
	// Draw the red lamp
	sgl::set_color(sgl::DARK_GRAY);
	if (light.get() == Color::Red)
		sgl::set_color(sgl::RED);
	sgl::fill_circle(150, 475, 70);
	// Draw the yellow lamp
	sgl::set_color(sgl::DARK_GRAY);
	if (light.get() == Color::Yellow)
		sgl::set_color(sgl::YELLOW);
	sgl::fill_circle(150, 300, 70);
	// Draw the green lamp
	sgl::set_color(sgl::DARK_GRAY);
	if (light.get() == Color::Green)
		sgl::set_color(sgl::GREEN);
	sgl::fill_circle(150, 125, 70);
}

void mouse_released(double, double, sgl::MouseButton) {
	light.change();
	sgl::update_window();
}

int main() {
	sgl::create_window("Traffic Light", 10, 300, 10, 600);
	sgl::set_paint_function(paint);
	sgl::set_mouse_released_function(mouse_released);
	sgl::run_window();

}

