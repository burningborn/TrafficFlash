#pragma once
#include <windows.h>
#include "vehicleFlash.h"
#include "humanFlash.h"

//using namespace std;
class crossRoads  
{
private:
	vehicleFlash firstStream;
	vehicleFlash secondStream;
	vehicleFlash thirdStream;
	vehicleFlash fourthStream;
	humanFlash streamOne;
	humanFlash streamTwo;
	humanFlash streamThree;
	humanFlash streamFour;
public:
	crossRoads(){}
	~crossRoads(){}

	void day();
	void night();

	
	void display();
};

