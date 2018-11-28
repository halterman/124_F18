// Widget method 
// implementations
// widget.cpp

#include "widget.h"

Widget::Widget() :
	value(0) {}

Widget::Widget(int v) :
	value(v) {}

int Widget::get() const {
	return value;
}

void Widget::up() {
	value++;
}

void Widget::down() {
	value--;
}