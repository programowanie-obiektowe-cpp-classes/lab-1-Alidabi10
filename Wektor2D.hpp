#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cmath>
// #include <print>

class Wektor2D
{
	double x;
	double y;

public:
	Wektor2D() : x(0), y(0)
	{
//		std::println("Wartosc wspolrzednej x: {}. Wartosc wspolrzednej y: {}.", x, y);
	}
	
	void setX(double new_x) { x = new_x; }
	void setY(double new_y) { y = new_y; }
	double getX() { return x; }
	double getY() { return y; }

	Wektor2D(double x2, double y2)
	{
		x = x2;
		y = y2;
	}
	Wektor2D operator+(const Wektor2D& other) { return Wektor2D(x + other.x, y + other.y); }

	double operator*(const Wektor2D& other) { return x * other.x + y * other.y; }
};
