#include "crossRoads.h"
#include <iostream>
#include <windows.h>
using namespace std;

void crossRoads::day() {
	//первое состояние
	this->firstStream.setCondition(0, 0, 1);
	this->secondStream.setCondition(1, 0, 0);
	this->thirdStream.setCondition(0, 0, 1);
	this->fourthStream.setCondition(1, 0, 0);
	this->streamOne.setCondition(0, 1);
	this->streamTwo.setCondition(1, 0);
	this->streamThree.setCondition(0, 1);
	this->streamFour.setCondition(1, 0);
	Sleep(1000); // время действия до смены состояния
	//второе состояние
	this->firstStream.setCondition(0, 0, 2);
	this->secondStream.setCondition(1, 0, 0);
	this->thirdStream.setCondition(0, 0, 2);
	this->fourthStream.setCondition(1, 0, 0);
	this->streamOne.setCondition(0, 2);
	this->streamTwo.setCondition(1, 0);
	this->streamThree.setCondition(0, 2);
	this->streamFour.setCondition(1, 0);
	Sleep(1000); // время действия до смены состояния
	//третье состояние
	this->firstStream.setCondition(0, 1, 0);
	this->secondStream.setCondition(1, 1, 0);
	this->thirdStream.setCondition(0, 1, 0);
	this->fourthStream.setCondition(1, 1, 0);
	this->streamOne.setCondition(0, 2);
	this->streamTwo.setCondition(1, 0);
	this->streamThree.setCondition(0, 2);
	this->streamFour.setCondition(1, 0);
	Sleep(1000); // время действия до смены состояния
	//четвёртое состояние
	this->firstStream.setCondition(1, 0, 0);
	this->secondStream.setCondition(0, 0, 1);
	this->thirdStream.setCondition(1, 0, 0);
	this->fourthStream.setCondition(0, 0, 1);
	this->streamOne.setCondition(1, 0);
	this->streamTwo.setCondition(0, 1);
	this->streamThree.setCondition(1, 0);
	this->streamFour.setCondition(0, 1);
	Sleep(1000); // время действия до смены состояния
	//пятое состояние
	this->firstStream.setCondition(1, 0, 0);
	this->secondStream.setCondition(0, 0, 2);
	this->thirdStream.setCondition(1, 0, 0);
	this->fourthStream.setCondition(0, 0, 2);
	this->streamOne.setCondition(1, 0);
	this->streamTwo.setCondition(0, 2);
	this->streamThree.setCondition(1, 0);
	this->streamFour.setCondition(0, 2);
	Sleep(1000); // время действия до смены состояния
	//шестое состояние
	this->firstStream.setCondition(1, 1, 0);
	this->secondStream.setCondition(0, 1, 0);
	this->thirdStream.setCondition(1, 1, 0);
	this->fourthStream.setCondition(0, 1, 0);
	this->streamOne.setCondition(1, 0);
	this->streamTwo.setCondition(0, 2);
	this->streamThree.setCondition(1, 0);
	this->streamFour.setCondition(0, 2);
}
void crossRoads::night() {
	this->firstStream.setCondition(0, 2, 0);
	this->secondStream.setCondition(0, 2, 0);
	this->thirdStream.setCondition(0, 2, 0);
	this->fourthStream.setCondition(0, 2, 0);

}


void crossRoads::display()
{}
	
