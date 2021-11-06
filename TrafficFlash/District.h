#pragma once
#include "crossRoads.h"
#include "vehicleFlash.h"
#include "humanFlash.h"
class District
{
private:
	crossRoads* cross;
public:
	District(){
		if (cross != nullptr)
			cross = new crossRoads;
	}
	~District(){
		delete[] cross;
	}

	virtual void day() {};
	virtual void night() {};
	
};

