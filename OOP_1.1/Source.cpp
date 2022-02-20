#include <iostream>
#include "IntPower.h"

using namespace std;


IntPower make_IntPower(double a, int b) {
	IntPower w;
	if (w.init(a)) {
		w.set_first(a);
		w.set_second(b);
	}
	else
	{
		cout << "\'first\' is incorrect.\n Enter again:" << endl;
	}
	return w;
}


int main() {
	IntPower one;
	

	//one.read();
	//one.display();
	
	one.set_first(2.5);					one.set_second(2);
	cout << one.get_first() << endl;	    cout << one.get_second() << endl;

	cout << "one: " << one.power() << endl;

	IntPower two = make_IntPower(2.2, 2);
	cout << "two: " << two.power() << endl;


	return 0;
}