#include <iostream>
#include "sample.h"
#include "rat.h"
#include "car.h"
#include "ambulance.h"
#include "calc.h"

using namespace std;

int main(){
	CCalc *pC1, *pC2;
	pC1 = new CCalc();
	pC2 = new CCalc(1, 2);
	cout << 3 << " + " << 4 << " = " << pC1->add(3, 4) << endl;
	cout << pC2->getA() << " + " << pC2->getB() << " = " << pC2->add() << endl;
	delete pC1;
	delete pC2;

	return 0;

/*
	CCar c;
	c.supply(10);
	c.move();
	c.move();
	CAmbulance a;
	a.supply(20);
	a.move();
	a.savePeople();
	
	return 0;
*/


/*
	CRat *r1, *r2, *r3;
	r1 = new CRat();
	r1->squeak();
	CRat::showNum();

	r2 = new CRat();
	r3 = new CRat();
	r2->squeak();
	r3->squeak();

	delete r1;
	delete r2;

	CRat::showNum();
	delete r3;
	CRat::showNum();

	return 0;
*/


/*
	CCar* pc = 0;
	pc = new CCar();
	
	pc->supply(10);
	pc->move();
	pc->move();
	pc->move();

	delete pc;

	cout << "Instance delete end" << endl;

	return 0;
*/

	
/*
	CSample obj1, obj2;

	obj1.set(1);
	obj2.set(2);

	cout << obj1.get() << endl;
	cout << obj2.get() << endl;

	return 0;
*/
}