#include <iostream>
#include <cstdlib>
#include <string>
#include "WrongShape.h"
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhomb.h"
#include "Square.h"

void print_info(Figure* F) {
	F->print_info();
}

int main() {
	setlocale(LC_ALL, "RU");

	try {
		Figure F1{};
		print_info(&F1);
	}
	catch (const WrongShape& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Triangle T1{ 10, 20, 30, 50, 60, 70 };
		print_info(&T1);
	}
	catch (const WrongShape& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Triangle T2{ 10, 20, 30, 50, 70, 70 };
		print_info(&T2);
	}
	catch (const WrongShape& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		RightTriangle R1{ 10, 20, 30, 30, 60 };
		print_info(&R1);
	}
	catch (const WrongShape& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		RightTriangle R2{ 10, 20, 30, 50, 60 };
		print_info(&R2);
	}
	catch (const WrongShape& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		IsoscelesTriangle I1{ 10, 20, 50, 80 };
		print_info(&I1);
	}
	catch (const WrongShape& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		IsoscelesTriangle I2{ 10, 20, 50, 60 };
		print_info(&I2);
	}
	catch (const WrongShape& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		EquilateralTriangle E1{ 30 };
		print_info(&E1);
	}
	catch (const WrongShape& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Quadrangle Q1{ 10, 20, 30, 40, 90, 90, 90, 90 };
		print_info(&Q1);
	}
	catch (const WrongShape& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Quadrangle Q2{ 10, 20, 30, 40, 50, 60, 70, 80 };
		print_info(&Q2);
	}
	catch (const WrongShape& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Parallelogram P1{ 20, 30, 90, 90 };
		print_info(&P1);
	}
	catch (const WrongShape& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Parallelogram P2{ 20, 30, 30, 40 };
		print_info(&P2);
	}
	catch (const WrongShape& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Rectangle Re1{ 10, 20 };
		print_info(&Re1);
	}
	catch (const WrongShape& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Rhomb Rh1{ 30, 90, 90 };
		print_info(&Rh1);
	}
	catch (const WrongShape& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Rhomb Rh2{ 30, 30, 40 };
		print_info(&Rh2);
	}
	catch (const WrongShape& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Square S1{ 20 };
		print_info(&S1);
	}
	catch (const WrongShape& err) {
		std::cout << "Ошибка создания фигуры. Причина: " << err.what() << std::endl;
	}
	std::cout << std::endl;

	return EXIT_SUCCESS;
}