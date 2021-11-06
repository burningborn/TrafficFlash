#pragma once
#include <iostream>
using namespace std;

class humanFlash
{
private:
	int STOP, WALK;
public:
	humanFlash() {
		STOP = 0;
		WALK = 0;
	}
	humanFlash(int STOP, int WALK):STOP(STOP), WALK(WALK){}
	~humanFlash(){}

	void setCondition(int STOP, int WALK) {
		this->STOP = STOP;
		this->WALK = WALK;
	}
	void display() {
		cout << this->STOP << " * " << this->WALK << endl;
	}
};

