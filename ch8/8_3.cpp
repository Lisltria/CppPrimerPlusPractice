#include <iostream>
#include <cctype>
using namespace std;

string & toUp( string &str ) {
	for ( int i=0; i<str.length(); i++ ) {
		str[i] = toupper( str[i]);
	}
	return str;
}

int main() {

	cout << "Enter a string (q to quit): ";

	while(1) {
		string s;
		getline( cin, s );
		if ( s=="q" ) {
			cout << "Bye" << endl;
			break;
		}
		else {
			cout << toUp( s ) << endl;
			cout<< "Next string (q to quit): ";
		}
	}
	return 0;
}
