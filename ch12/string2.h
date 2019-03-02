#ifndef STRING2_H_
#define STRING2_H_

#include <iostream>
using std::ostream;
using std::istream;

class String {
	char *str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public;
	String( const char * s);
	String();
	String( const String &);
	~String();
	int length () const { return len;}

}

#endif
