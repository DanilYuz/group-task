#pragma once
#include <ostream>
#include <iostream>

using namespace std;

class ComplexNum
{
private:
	double a, b;
public:

	ComplexNum();
	ComplexNum(double A, double B);

	double getA();
	double getB();

	ComplexNum operator+(const ComplexNum& other);
	ComplexNum operator-(const ComplexNum& other);
	ComplexNum operator*(const ComplexNum& other);
	ComplexNum operator/(const ComplexNum& other);
	ComplexNum& operator+=(const ComplexNum& other);
	ComplexNum& operator-=(const ComplexNum& other);
	ComplexNum& operator*=(const ComplexNum& other);
	ComplexNum& operator/=(const ComplexNum& other);
	ComplexNum& operator!=(const ComplexNum& other);
	bool operator==(const ComplexNum& other);
	friend std::ostream& operator<<(std::ostream& os, const ComplexNum& num);
};

