#pragma once

#include "Figure.h"

class Triangle : public Figure {
protected:
	int _sideA{}, _sideB{}, _sideC{};
	int _cornerA{}, _cornerB{}, _cornerC{};

public:
	Triangle(int sideA, int sideB, int sideC, int cornerA, int cornerB, int cornerC);

	int get_sideA();
	int get_sideB();
	int get_sideC();
	int get_cornerA();
	int get_cornerB();
	int get_cornerC();

	void print_info() override;
};