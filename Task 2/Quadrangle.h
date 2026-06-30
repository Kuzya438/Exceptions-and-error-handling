#pragma once

#include "Figure.h"

class Quadrangle : public Figure {
protected:
	int _sideA{}, _sideB{}, _sideC{}, _sideD{};
	int _cornerA{}, _cornerB{}, _cornerC{}, _cornerD{};

public:
	Quadrangle(int sideA, int sideB, int sideC, int sideD, int cornerA, int cornerB, int cornerC, int cornerD);

	int get_sideA();
	int get_sideB();
	int get_sideC();
	int get_sideD();
	int get_cornerA();
	int get_cornerB();
	int get_cornerC();
	int get_cornerD();

	void print_info() override;
};