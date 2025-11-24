#include "EserciziInterfacce.h"
#include <iostream>

Circle::Circle(const std::string& initName)
{
	name = initName;
}

void Circle::Draw()
{
	std::cout << "Name: " << name << '\n';
}

Square::Square(const std::string& initName) 
{
	name = initName;
}

void Square::Draw()
{
	std::cout << "Name: " << name << '\n';
}
