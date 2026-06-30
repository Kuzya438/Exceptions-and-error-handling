#include "Parallelogram.h"
#include "WrongShape.h"

Parallelogram::Parallelogram(int sideA, int sideB, int cornerA, int cornerB)
	: Quadrangle(sideA, sideB, sideA, sideB, cornerA, cornerB, cornerA, cornerB) {
	_name = "Параллелограмм";

	if (_sideA != _sideC || _sideB != _sideD) { throw WrongShape("стороны попарно не равны"); }
	if (_cornerA != _cornerC || _cornerB != _cornerD) { throw WrongShape("углы попарно не равны"); }
}