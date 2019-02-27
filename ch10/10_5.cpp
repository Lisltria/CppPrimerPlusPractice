#include <iostream>

struct customer {
	char fullname[35];
	double payment;
};
typedef customer Item;

class Stack {
	Item item[10];
	int top;
	int totalPayment;
public:
	void push( Item & p );
	Item pop();
	int getTotalPay() { return totalPayment; }

	Stack() {
		totalPayment = 0;
		top = 0;
	}
};

void Stack::push( Item & p ) {
	item[top] = p;
	top++;
}

Item Stack::pop() {
	if ( top <= 0) {
		std::cout << "Stack is empty" << std::endl;
		exit(1);
	}
	top--;
	totalPayment += item[top].payment;
	return item[top];
}

int main() {
	Stack t;
	customer c1{"abc",123}, c2{"sdf",234};
	t.push( c1 );
	t.push( c2 );
	std::cout << t.pop().fullname << " " << t.pop().fullname << std::endl;
	std::cout << t.getTotalPay() << std::endl;
	
	return 0;
}

