#include <iostream>
#include "Header1.h"
using namespace std;

Methods::Methods()
{
	real = 0;
	imag = 0;
}

void Methods::add(Methods a, Methods b)
{
	int realnum = 0;
	int imagnum = 0;
	realnum = a.real + b.real;
	imagnum = a.imag + b.imag;
	a.real = realnum;
	a.imag = imagnum;
}

void Methods::mul(Methods a, Methods b)
{
	int newreal = 0;
	int newimag = 0;
	newreal = (a.real * b.real) - (a.imag * b.imag);
	newimag = (a.real * b.imag) + (a.imag * b.real);
	a.real = newreal;
	a.imag = newimag; 
}

void Methods::print(Methods a)
{
	cout << "The complex number is : " << a.real; if (a.imag > 0) { cout << " + i" << a.imag << endl; }
	else cout << " - i" << (a.imag * -1) << endl;
}