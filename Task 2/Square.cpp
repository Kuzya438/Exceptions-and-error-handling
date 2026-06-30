#include "Square.h"
#include "WrongShape.h"

Square::Square(int sideA)
	: Rectangle(sideA, sideA) {
	_name = "Квадрат";

	if (_sideA != _sideB && _sideA != _sideC && _sideA != _sideD && _sideB != _sideC && _sideB != _sideD && _sideC != _sideD) { throw WrongShape("стороны не равны"); }
	if (_cornerA != 90 || _cornerB != 90 || _cornerC != 90 || _cornerD != 90) { throw WrongShape("углы попарно не равны"); }
}