#pragma once
#include <iostream>
using namespace std;


class vehicleFlash
{
private:
	int red, yellow, green;
public:
	vehicleFlash(){
		red = 0;
		yellow = 0;
		green = 0;
	}
	~vehicleFlash(){}


	void setCondition(int red, int yellow, int green) {
		this->red = red;
		this->yellow = yellow;
		this->green = green;
	}
	//vehicleFlash& operator<<(vehicleFlash& other);
	void display() {
		cout << this->red << " * " << this->yellow << " * " << this->green << endl;
	}
};

