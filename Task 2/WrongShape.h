#pragma once

#include <stdexcept>
#include <string>

class WrongShape : public std::domain_error {
public:
	WrongShape(const std::string& message);
};