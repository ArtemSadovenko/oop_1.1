#include "IntPower.h"

bool IntPower::init(double first) {
	if (first == 0.0) {
		return false;
	}
	else {
		return true;
	}
}

void IntPower::read() {
	do {
		cout << "first = "; cin >> first;
		cout << "second = "; cin >> second;
		if (!(init(first))) {
			cout << "\'first\' is incorrect.\n Enter again:" << endl;
		}
	} while (!init(first));
}

void IntPower::display(){
	cout << "first = " << first << endl;
	cout << "second = " << second << endl;
}

double IntPower::power() {
	if (init(first)) {
		return pow(first, second);
	}
	else {
		return -1;
	}
}