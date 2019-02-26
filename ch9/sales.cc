#include <iostream>
#include "sales.h"
#include <cfloat>

namespace SALES {
	void setSales( Sales & s, const double ar[], int n) {
		double sum = 0;
		double max =0, min = DBL_MAX; 
		for ( int i = 0; i < n; i++ ) {
			s.sales[i] = ar[i];
			sum += ar[i];
			max = ar[i] > max ? ar[i] : max;
			min = ar[i] < min ? ar[i] : min;
		}
		for ( int i = n; i < 4 ; i++ ) {
			s.sales[i] = 0;
		}
		s.average = sum/n;
		s.max = max;
		s.min = min;
	}		
	void setSales( Sales & s) {
		double sum = 0;
		double max =0, min = DBL_MAX; 
		for ( int i = 0; i < 4; i++ ) {
			double t;
			std::cout << "enter num: ";
			std::cin >> t;
			sum += t;
			max = t > max ? t : max;
			min = t < min ? t : min;
		}
		s.average = sum/4;
		s.max = max;
		s.min = min;
	}		
	void showSales( const Sales & s ) {
		std::cout << s.average << " "
				  << s.max << " "
				  << s.min << std::endl;
	}
}
