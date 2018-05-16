#pragma once
#include "Factory.h"
#include "Line.h"
#include "Circle.h"

class ShapeFactory :
	public Factory
{
public:
	ShapeFactory();
	~ShapeFactory();
	Line& createLine();
	Circle& createCircle();
};

