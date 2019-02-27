#include <iostream>
#include "complex0.h"

complex::complex(double a, double b) {
	x = a;
	y = b;
}

std::ostream &operator << ( std::ostream & os, complex & t) {
	os << "(" << t.x << "," << t.y << "!)";
	return os;
}

std::istream & operator >> ( std::istream & is, complex & t) {
	std::cout << "real: ";
	is >> t.x;
	std::cout << "imaginary: ";
	is >> t.y;
	return is;
}

complex operator ~ (const complex & t) {
	complex tmp(t.x, -t.y);
	return tmp;
}

complex operator + (const complex & a, const complex & b) {
	complex tmp( a.x+b.x, a.y+b.y);
	return tmp;
}

complex operator - (const complex & a, const complex & b) {
	complex tmp( a.x-b.x, a.y-b.y);
	return tmp;
}

complex operator * (const complex & a, const complex & b) {
	complex tmp( a.x*b.x-a.y*b.y, a.x*b.y+a.y*b.x);
	return tmp;
}

complex operator * (double n, const complex & a) {
	complex tmp(n*a.x, n*a.y);
	return tmp;
}

