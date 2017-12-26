#include "ambulance.h"
#include <iostream>
using namespace std;

CAmbulance::CAmbulance() : m_number(119) {
	cout << "create CAmbulance object" << endl;
}

CAmbulance::~CAmbulance() {
	cout << "delete CAmbulance object" << endl;
}

void CAmbulance::savePeople() {
	cout << "Save " << endl << "Call " << m_number << endl;
}

