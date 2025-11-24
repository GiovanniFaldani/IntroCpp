#pragma once

#include <string>

class IDrawable 
{

public:

	virtual ~IDrawable() = default;

	virtual void Draw() = 0;

};

class Circle : public IDrawable 
{
public:

	std::string name;

	Circle(const std::string& initName);

	void Draw() override;
};

class Square : public IDrawable
{
public:

	std::string name;

	Square(const std::string& initName);

	void Draw() override;
};
;