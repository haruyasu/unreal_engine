#pragma once

class CCalc {
private:
	int m_a, m_b;

public:
	CCalc();
	CCalc(int a, int b);

	int add();
	int add(int a, int b);

	void setValue(int a, int b);
	int getA();
	int getB();
};
