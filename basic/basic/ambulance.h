#pragma once

#include "car.h"

class CAmbulance : public CCar {
public:
	CAmbulance();
	virtual ~CAmbulance();
	void savePeople();

private:
	int m_number;
};
