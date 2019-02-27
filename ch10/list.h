#ifndef LIST_H_
#define LIST_H_

template<class Item>
class Listt {
	Item list[50];
	int p;
public:
	bool add(Item &t);
	bool del();
	Item visit(int n);

	Item operator [](unsigned int n);
	
	Listt(){ p = 0; }
};
template <class Item>
bool Listt<Item>::add(Item &t) {
	if( p>=50 ) 
		return false;
	list[p] = t;
	p++;

	return true;
}
template <class Item>
bool Listt<Item>::del() {
	if( p<=0 ) {
		return false;
	}
	p--;
	return true;
}

template <class Item>
Item Listt<Item>::visit(int n) {
	if( n<0 || n>p ) {
		return list[0];
	}
	else return list[n];
}	

template <class Item>
Item Listt<Item>::operator [] (unsigned int n) {
	if( n>p ) return list[0];
	return list[n];
}
#endif
