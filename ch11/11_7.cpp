#include <iostream>
#include "complex0.h"
using namespace std;

int main() {
	complex a(3.0, 4.0);
	complex c;
	complex tmp;
	
	cout << "Enter a complex number (q to quit)" << endl;

	while( cin >> c ) {
		cout << "c is " << c << endl;
		tmp = ~c;
		cout << "complex conjugate is " << tmp << endl;
		cout << "a is " << a << endl;
		tmp = a+c;
		cout << "a + c is " << tmp << endl;
		tmp = a-c;
		cout << "a - c is " << tmp << endl;
		tmp = a *c;
		cout << "a * c is " << tmp << endl;
		tmp = 2 * c;
		cout << "2 * c is " << tmp << endl;

	}
	cout << "Done!" << endl;
	return 0;
}
