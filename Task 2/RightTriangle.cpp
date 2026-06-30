#include "RightTriangle.h"
#include "WrongShape.h"

RightTriangle::RightTriangle(int sideA, int sideB, int sideC, int cornerA, int cornerB)
	: Triangle(sideA, sideB, sideC, cornerA, cornerB, 90) {
	_name = "Прямоугольный треугольник";

	if (_cornerC != 90) { throw WrongShape("угол C не равен 90"); }
}