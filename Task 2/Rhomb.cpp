#include "Rhomb.h"
#include "WrongShape.h"

Rhomb::Rhomb(int sideA, int cornerA, int cornerB)
	: Parallelogram(sideA, sideA, cornerA, cornerB) {
	_name = "Ромб";

	if (_sideA != _sideB && _sideA != _sideC && _sideA != _sideD && _sideB != _sideC && _sideB != _sideD && _sideC != _sideD) { throw WrongShape("стороны не равны"); }
	if (_cornerA != _cornerC || _cornerB != _cornerD) { throw WrongShape("углы попарно не равны"); }
}