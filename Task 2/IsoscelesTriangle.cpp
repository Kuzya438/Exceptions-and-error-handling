#include "IsoscelesTriangle.h"
#include "WrongShape.h"

IsoscelesTriangle::IsoscelesTriangle(int sideA, int sideB, int cornerA, int cornerB)
	: Triangle(sideA, sideB, sideA, cornerA, cornerB, cornerA) {
	_name = "Равнобедренный треугольник";

	if (_sideA != _sideC) { throw WrongShape("стороны a и c не равны"); }
	if (_cornerA != _cornerC) { throw WrongShape("углы A и C не равны"); }
}