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




int main()
{
	Wektor2D v1{};	
	v1.setX(1.);
	v1.setY(1.);
	double x1 = v1.getX();
	double y1 = v1.getY();
//	std::println("Wartosc wspolrzednej x1: {}. Wartosc wspolrzednej y1: {}.", x1, y1);
	Wektor2D v2{ 2., 2. };
	std::println("Wartosc wspolrzednej x2: {}. Wartosc wspolrzednej y2: {}.", v2.getX(), v2.getY());
	Wektor2D sum = v1 + v2;
//	std::println("Suma wektorow: x_suma = {}, y_suma = {}.", sum.getX(), sum.getY());
	double prod = v1 * v2;
//	std::println("Iloczyn skalarny wektorow wynosi: {}.", prod);


	/*
	Wektor2D v1{};           // Konstruktor domyślny, wektor o wsp. [0, 0]
	v1.setX(1.);             // setter
	v1.setY(1.);             // setter
	double x1 = v1.getX();   // getter
	double y1 = v1.getY();   // getter

	Wektor2D v2{ 2., 2. }; // Konstruktor nadający współrzędne

	Wektor2D sum = v1 + v2; // dodawanie wektorów

	double prod = v1 * v2; // iloczyn skalarny
	*/
	return 0;
}

