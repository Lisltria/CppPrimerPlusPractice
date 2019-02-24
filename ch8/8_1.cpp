#include <iostream>

void aRidiculousFunc( const char * s, const int n ) {
	static int countOfCall = 0;
	countOfCall++;
	if ( n != 0 ) {
		for ( int i = 1; i <= countOfCall; i++ ) {
			std::cout << s << std::endl;
		}
	}
}

int main() {
	char str[20] = "Stupid!";
	std::cout<<"First call:"<<std::endl;
	aRidiculousFunc( str, 1 );
	std::cout<<"Second call:"<<std::endl;
	aRidiculousFunc( str, 1 );
	std::cout<<"Third call:"<<std::endl;
	aRidiculousFunc( str, 1 );
	return 0;
}




