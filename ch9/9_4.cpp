#include <iostream>
#include "sales.h"
int main() {
	double arr[4] = { 1.0, 2.0, 3.0, 4.0};
	SALES::Sales t1, t2;
	SALES::setSales( t1, arr, 3);
	SALES::setSales( t2);
	SALES::showSales( t1);
	SALES::showSales( t2);
	return 0;
}
