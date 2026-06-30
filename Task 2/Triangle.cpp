#include <iostream>
#include "Triangle.h"
#include "WrongShape.h"

Triangle::Triangle(int sideA, int sideB, int sideC, int cornerA, int cornerB, int cornerC) {
	_name = "Треугольник";
	_sides = 3;
	_sideA = sideA;
	_sideB = sideB;
	_sideC = sideC;
	_cornerA = cornerA;
	_cornerB = cornerB;
	_cornerC = cornerC;

	if (_sideA <= 0 || _sideB <= 0 || _sideC <= 0) { throw WrongShape("количество сторон не равно 3"); }
	if ((_cornerA + _cornerB + _cornerC) != 180) { throw WrongShape("сумма углов не равна 180"); }
}

int Triangle::get_sideA() { return _sideA; }
int Triangle::get_sideB() { return _sideB; }
int Triangle::get_sideC() { return _sideC; }
int Triangle::get_cornerA() { return _cornerA; }
int Triangle::get_cornerB() { return _cornerB; }
int Triangle::get_cornerC() { return _cornerC; }

void Triangle::print_info() {
	std::cout << _name << " (стороны " << _sideA << ", " << _sideB << ", " << _sideC <<
		"; углы " << _cornerA << ", " << _cornerB << ", " << _cornerC << ") создан" << std::endl;
}