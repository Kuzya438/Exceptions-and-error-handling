#include "Rectangle.h"
#include "WrongShape.h"

Rectangle::Rectangle(int sideA, int sideB)
	: Parallelogram(sideA, sideB, 90, 90) {
	_name = "Прямоугольник";

	if (_sideA != _sideC || _sideB != _sideD) { throw WrongShape("стороны попарно не равны"); }
	if (_cornerA != 90 || _cornerB != 90 || _cornerC != 90 || _cornerD != 90) { throw WrongShape("углы не равны 90"); }
}