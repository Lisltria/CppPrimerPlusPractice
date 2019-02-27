#ifndef COMPLEX0_H_
#define COMPLEX0_H_

#include <iostream>

class complex {
	double x,y;//x+yi
public:
	complex( double a, double b );
	complex() { x = 0; y = 0; }
	friend std::ostream & operator << ( std::ostream & os, complex & t);	
	friend std::istream & operator >> ( std::istream & is, complex & t);
	friend complex operator ~ (const complex & t);
    friend complex operator + (const complex & a, const complex & b);
	friend complex operator - (const complex & a, const complex & b);
	friend complex operator * (const complex & a, const complex & b);
	friend complex operator * (double n, const complex & a);	
};

#endif
