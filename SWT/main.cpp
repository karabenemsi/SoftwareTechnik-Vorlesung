// main.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "Vector.h"
#include "Komplex.h"
#include "Rectangle.h"
#include <iostream>
#include <fstream>
#include <stack>

using namespace std;


int main()
{


	ofstream file;
	file.open("file.txt", ios::ate);

	std::cout << "Write to File: " << std::endl;

	std::cout << "======= " << "Vektor Start" << " ========" << std::endl;
	file << "======= " << "Vektor Start" << " ========" << std::endl;
	Vector a(3, 4);
	Vector *b = new Vector(4, 2);
	Vector c = a + *b;
	Vector v1 = c;

	std::cout << a << std::endl;
	file << a << std::endl;
	std::cout << c << std::endl;
	file << c << std::endl;
	std::cout << v1 << std::endl;
	file << v1 << std::endl;


	std::cout << c.mult(a) << std::endl;
	file << c.mult(a) << std::endl;
	std::cout << c.mult(3,4) << std::endl;
	file << c.mult(3,4) << std::endl;

	delete b;

	std::cout << "======= " << "Vektor Ende" << " ========" << std::endl;
	file << "======= " << "Vektor Ende" << " ========" << std::endl;


	std::cout << "======= " << "Zeiger Start" << " ========" << std::endl;
	file << "======= " << "Zeiger Start" << " ========" << std::endl;


	int x = 2;
	int *y;
	int &z = x;

	x = 3;
	y = &x;
	// x,y,z = 3
	z = 5;
	x = *y + z;
	*y = x + z;
	z = x + *y;

	std::cout << x << " " << *y << " " << z << " " << std::endl;
	file << x << " " << *y << " " << z << " " << std::endl;

	std::cout << "======= " << "Zeiger Ende" << " ========" << std::endl;
	file << "======= " << "Zeiger Ende" << " ========" << std::endl;



	std::cout << "======= " << "Komplex Start" << " ========" << std::endl;
	file << "======= " << "Komplex Start" << " ========" << std::endl;

	Komplex ka = Komplex(3, 2);
	Komplex kb = Komplex(1, 4);

	Komplex kc = ka * kb;
	Komplex kd = ka / kb;

	ka += kb;

	std::cout << kc << std::endl;
	file << kc << std::endl;
	std::cout << ka << std::endl;
	file << ka << std::endl;
	std::cout << kd << std::endl;
	file << kd << std::endl;

	std::cout << "======= " << "Komplex Ende" << " ========" << std::endl;
	file << "======= " << "Komplex Ende" << " ========" << std::endl;
	std::cout << "======= " << "Rechteck Start" << " ========" << std::endl;
	file << "======= " << "Rechteck Start" << " ========" << std::endl;

	Rectangle ra = Rectangle(3, 4, 4, 6);

	Rectangle rb = Rectangle(2, 4, 5, 7);

	ra = rb;

	std::cout << ra << std::endl;
	file << ra << std::endl;
	std::cout << rb << std::endl;
	file << rb << std::endl;


	std::cout << "======= " << "Rechteck Ende" << " ========" << std::endl;
	std::cout << "======= " << "Rechteck Ende" << " ========" << std::endl;
	std::cout << "======= " << "Stack Start" << " ========" << std::endl;
	file << "======= " << "Stack Start" << " ========" << std::endl;

	Vector vec1 = Vector(3, 6);
	Vector vec2 = Vector(5, 1);
	Vector vec3 = Vector(2, 2);

	std::stack<Vector> vectorStack;
	
	vectorStack.push(vec1);
	vectorStack.push(vec2);
	vectorStack.push(vec3);

	std::cout << "Groesse Stack: " << vectorStack.size() << std::endl;
	file << "Groesse Stack: " << vectorStack.size() << std::endl;

	std::cout << "Oberstes Element: " << vectorStack.top() << std::endl;
	file << "Oberstes Element: " << vectorStack.top() << std::endl;


	vectorStack.pop();
	vectorStack.pop();
	vectorStack.pop();


	std::cout << "======= " << "Stack Ende" << " ========" << std::endl;
	file << "======= " << "Stack Ende" << " ========" << std::endl;


	system("pause");
	file.close();
    return 0;
}

