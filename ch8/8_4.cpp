#include <iostream>

using namespace std;
#include <cstring>
struct stringy {
	char * str;
	int ct;
};

void set(stringy &H, char *s) {
	int len = strlen(s);
	H.str = new char[len];
	strcpy( H.str, s);
	H.ct = len;
}

void show( stringy &H) {
	cout << H.str <<endl;
}

void show( stringy &H, int t) {
	for( int i=1; i<=t; i++) {
		cout << H.str << endl;
	}
}

void show( char *s ) {
	cout << s <<endl;
}

void show( char *s, int t ) {
	for( int i=1; i <= t; i++) {
		cout << s << endl;
	}
}

void show( string str ) {
	cout << str <<endl;
}

template<typename T>
T max5(T arr[]) {
	const int len = 5;
	for( int i=1; i < len; i++) {
		if( arr[i]>arr[0] ) {
			arr[0] = arr[i];
		}
	}
	return arr[0];
}

int main() {
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);

	show( beany);
	show( beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");

	int arr_i[5] = {1, 2, 3, 4, 5};
	double arr_d[5] = {1.0, 2.0, 3.0, 4.0, 5.1};
	cout << "Max int is:" << max5( arr_i ) << endl;
	cout << "Max double is:" << max5( arr_d ) << endl;
	return 0;
}
