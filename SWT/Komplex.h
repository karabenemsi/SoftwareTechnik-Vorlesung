#pragma once
#include <iostream>
class Komplex
{
private: 

	//Realteil:
	double r;
	//Imaginärteil
	double i;


public:
	Komplex(double r = 1, double i = 0);
	Komplex();
	Komplex(const Komplex& k);
	~Komplex();

	double getR() const;
	double getI() const;

	Komplex operator+(const Komplex& x);
	Komplex operator-(const Komplex& x);
	Komplex operator*(const Komplex& x);
	Komplex operator/(const Komplex& x);
	Komplex operator+=(const Komplex& x);
	Komplex operator-=(const Komplex& x);
	Komplex operator*=(const Komplex& x);
	Komplex operator/=(const Komplex& x);

	Komplex operator=(const Komplex& x);
};

std::ostream& operator<<(std::ostream& os, Komplex& k);

