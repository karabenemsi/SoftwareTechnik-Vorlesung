#include "stdafx.h"
#include "Komplex.h"
#include <iostream>


Komplex::Komplex()
{
	Komplex::r = 1;
	Komplex::i = 0;
}

Komplex::Komplex(double r, double i)
{
	Komplex::r = r;
	Komplex::i = i;
}

Komplex::Komplex(const Komplex& k) {
	r = k.getR();
	i = k.getI();
}

Komplex::~Komplex()
{
}

double Komplex::getR() const
{
	return r;
}

double Komplex::getI() const
{
	return i;
}

Komplex Komplex::operator+(const Komplex& x)
{
	return Komplex((r + x.getR()),(i + x.getI()));
}

Komplex Komplex::operator-(const Komplex& x)
{
	return Komplex((r - x.getR()), (i - x.getI()));
}


Komplex Komplex::operator*(const Komplex& x) {
	return Komplex((x.getR() * r - x.getI() * i), (x.getR() * i + r * x.getI()));
}

Komplex Komplex::operator/(const Komplex& x)
{
	double real = (r*x.getR() + i * x.getI()) / (x.getR()*x.getR() + i + i);
	double img = (-1 * r*x.getI() + x.getR() * i) / (x.getR()*x.getR() + i + i);
	return Komplex(r, img);
}

Komplex Komplex::operator+=(const Komplex& x)
{
	return Komplex((x.getR() + r), (x.getI() + i));
}

Komplex Komplex::operator-=(const Komplex& x)
{
	return Komplex(1,1);
}

Komplex Komplex::operator*=(const Komplex& x)
{
	return Komplex(1,1);
}

Komplex Komplex::operator/=(const Komplex& x)
{
	return Komplex(1,1);
}

Komplex Komplex::operator=(const Komplex& x)
{
	return x;
}

std::ostream& operator<<(std::ostream& os, Komplex& k) {
	if (k.getI() < 0) {
		os << "Komplex: " << k.getR() << "-" << k.getI() << "j";
	}
	else {
		os << "Komplex: " << k.getR() << "+" << k.getI() << "j";
	}
	return os;
}