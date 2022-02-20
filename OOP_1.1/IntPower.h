#include <iostream>

#pragma once

using namespace std;

class IntPower
{
private:
	double first;
	int second;
public:
	double get_first() { return first; };
	int get_second() { return second; };

	void set_first(double value) { first = value; };
	void set_second(int value) { second = value; };

	bool init(double first);
	void read();
	void display();

	double power();
};

