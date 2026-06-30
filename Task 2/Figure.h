#pragma once

#include <string>

class Figure {
protected:
	std::string _name{ "Фигура" };
	int _sides{ 0 };

public:
	Figure();

	std::string get_name() const;
	int get_sides() const;

	virtual void print_info();
};