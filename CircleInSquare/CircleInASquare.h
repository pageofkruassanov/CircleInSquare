#pragma once
#include "Circle.h"
#include "Square.h"
class CircleInASquare : public Circle, public Square
{
public:
	void Show();
};

