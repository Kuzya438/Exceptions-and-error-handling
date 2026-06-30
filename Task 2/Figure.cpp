#include <iostream>
#include "Figure.h"

Figure::Figure() = default;

std::string Figure::get_name() const { return _name; }
int Figure::get_sides() const { return _sides; }

void Figure::print_info() {
	std::cout << _name << " (стороны " << _sides << ")" << std::endl;
}