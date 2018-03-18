#include "stdafx.h"
#include <iostream>
#include <string>
#include "cswoman.h"

CSWoman::CSWoman(const char* const name, const unsigned birthYear, const char* const fact) :
	name_{ name },
	birthYear_{ birthYear },
	fact_{ fact }
{
}

unsigned CSWoman::get_birth() const
{
	return birthYear_;
}

std::string CSWoman::get_fact() const
{
	return fact_;
}

std::string CSWoman::get_name() const
{
	return name_;
}

void CSWoman::print() const
{
	std::cout << get_name() << ", " << get_birth() << ", " << get_fact() << std::endl;
}