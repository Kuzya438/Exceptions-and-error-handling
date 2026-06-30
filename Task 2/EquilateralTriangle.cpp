#include "EquilateralTriangle.h"
#include "WrongShape.h"

EquilateralTriangle::EquilateralTriangle(int sideA)
	: Triangle(sideA, sideA, sideA, 60, 60, 60) {
	_name = "Равносторонний треугольник";

	if ((_sideA != _sideB) && (_sideA != _sideC) && (_sideB != _sideC)) { throw WrongShape("стороны не равны"); }
	if (_cornerA != 60 || _cornerB != 60 || _cornerC != 60) { throw WrongShape("углы не равны 60"); }
}