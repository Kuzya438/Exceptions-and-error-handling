#include <iostream>
#include "Quadrangle.h"
#include "WrongShape.h"

Quadrangle::Quadrangle(int sideA, int sideB, int sideC, int sideD, int cornerA, int cornerB, int cornerC, int cornerD) {
	_name = "Четырёхугольник";
	_sides = 4;
	_sideA = sideA;
	_sideB = sideB;
	_sideC = sideC;
	_sideD = sideD;
	_cornerA = cornerA;
	_cornerB = cornerB;
	_cornerC = cornerC;
	_cornerD = cornerD;

	if (_sideA <= 0 || _sideB <= 0 || _sideC <= 0 || _sideD <= 0) { throw WrongShape("количество сторон не равно 4"); }
	if ((_cornerA + _cornerB + _cornerC + _cornerD) != 360) { throw WrongShape("сумма углов не равна 360"); }
}

int Quadrangle::get_sideA() { return _sideA; }
int Quadrangle::get_sideB() { return _sideB; }
int Quadrangle::get_sideC() { return _sideC; }
int Quadrangle::get_sideD() { return _sideD; }
int Quadrangle::get_cornerA() { return _cornerA; }
int Quadrangle::get_cornerB() { return _cornerB; }
int Quadrangle::get_cornerC() { return _cornerC; }
int Quadrangle::get_cornerD() { return _cornerD; }

void Quadrangle::print_info() {
	std::cout << _name << " (стороны " << _sideA << ", " << _sideB << ", " << _sideC << ", " << _sideD <<
		"; углы " << _cornerA << ", " << _cornerB << ", " << _cornerC << ", " << _cornerD << ") создан" << std::endl;
}