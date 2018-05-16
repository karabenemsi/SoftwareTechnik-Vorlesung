#include "stdafx.h"
#include "ShapeFactory.h"


ShapeFactory::ShapeFactory()
{
}


ShapeFactory::~ShapeFactory()
{
}

Line& ShapeFactory::createLine()
{

	Line* line = new Line();
	return *line;
}

Circle& ShapeFactory::createCircle()
{
	Circle* c = new Circle();
	return *c;
}
