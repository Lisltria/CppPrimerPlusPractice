#include <iostream>
#include <cstring>
struct CandyBar {
	char name[50];
	double weight;
	int calori;
};

void show( const CandyBar &H ) {
	std::cout << H.name << " " << H.weight << " " << H.calori << std::endl;
}

void makename( CandyBar &H, const char *s, const double w, const int c ) {
	strcpy( H.name,s );
	H.weight = w;
	H.calori = c;
	show( H );
}

int main() {
	CandyBar T={"Millennium", 2, 30};
	makename( T , "Millennium", 2.35, 350);
	return 0;
}
