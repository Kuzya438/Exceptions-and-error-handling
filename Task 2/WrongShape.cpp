#include "WrongShape.h"

WrongShape::WrongShape(const std::string& message)
		: std::domain_error(message) {};