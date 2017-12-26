#include "car.h"
#include <iostream>

using namespace std;

CCar::CCar() : m_fuel(0), m_migration(0) {
	cout << "Create CCar" << endl;
}

CCar::~CCar() {
	cout << "Delete CCar" << endl;
}

void CCar::move() {
	if (m_fuel >= 0) {
		m_migration++;
		m_fuel--;
	}
	cout << "Disatance : " << m_migration << endl;
	cout << "Fuel : " << m_fuel << endl;
}

void CCar::supply(int fuel) {
	if (fuel > 0) {
		m_fuel += fuel;
	}
	cout << "Fuel : " << m_fuel << endl;
}
