#include <iostream>
#include "list.h"

int main() {
	Listt<double> tt;
	double d1 = 4.4, d2 = 5.5, d3 =6.6;
	tt.add(d1);
	tt.add(d2);
	tt.add(d3);
	std::cout<<tt[2]<<std::endl;
	std::cout<<tt.visit(1)<<std::endl;
	return 0;
}
