#include "stdafx.h"
#include "Bridge.h"
#include <iostream>


PrintImplement::PrintImplement()
{
}


PrintImplement::~PrintImplement()
{
}

PrintImplementA::PrintImplementA()
{
}

PrintImplementA::~PrintImplementA()
{
}

void PrintImplementA::print()
{
	std::cout << "A" << std::endl;
}

PrintImplementB::PrintImplementB()
{
}

PrintImplementB::~PrintImplementB()
{
}

void PrintImplementB::print()
{
	std::cout << "B" << std::endl;
}
