#include <iostream>
#include <cstring>
#include <istream>
#include "golf.h"

void setgolf( golf & g, const char *name, int hc) {
	strcpy( g.fullname, name);
	g.handicap = hc;
}

int setgolf( golf & g ) {
	char s[50]="";
	
	std::cout << "Input name: ";
	std::cin.getline(s,40);
	std::cout << "Input handicap: ";
	std::cin >> g.handicap;
	strcpy( g.fullname, s);
	if ( strlen(s) == 0)
		return 0;
	return 1;
}



