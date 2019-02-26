#include <iostream>
#include "golf.h"

int main() {
	golf t1, t2;
	setgolf( t1, "P", 24);
	std::cout << t1.fullname << " " << t1.handicap << std::endl;
	setgolf( t2);
	std::cout << t2.fullname << " " << t2.handicap << std::endl;
	
	return 0;
}
