#include <iostream>
#include "Methods.h"
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
	//a.real = realnum;
	//a.imag = imagnum;
	cout << "Complex Addition is " << realnum; if (imagnum < 0) { cout << "- " << (imagnum * -1) << "i" << endl; }
	else cout << " + " << imagnum << "i" << endl;
}

void Methods::mul(Methods &a, Methods &b)
{
	int newreal = 0;
	int newimag = 0;
	newreal = (long double)(a.real * b.real) - (long double)(a.imag * b.imag);
	newimag = (long double)(a.real * b.imag) + (long double)(a.imag * b.real);
	a.real = newreal;
	a.imag = newimag; 
	cout << "Complex Multiplcation is " << newreal; if (newimag < 0) { cout << "- " << (newimag * -1) << "i" << endl; }
	else cout << " + " << newimag << "i" << endl;
}

void Methods::print(Methods a)
{
	cout << "The complex number is : " << a.real; if (a.imag > 0) { cout << " + " << a.imag << "i" << endl; }
	else cout << " - " << (a.imag * -1) << "i" << endl;
}

void Methods::sub(Methods a, Methods b) 
{

	int realnum = 0;
	int imagnum = 0;
	realnum = a.real - b.real;
	imagnum = a.imag - b.imag;
	//a.real = realnum;
	//a.imag = imagnum;
	cout << "Complex Subtraction is " << realnum; if (imagnum < 0) { cout << "- " << (imagnum * -1) << "i" << endl; } else cout << " + " << imagnum <<"i" << endl;
}
void Methods::div(Methods a, Methods b) 
{
	double realnum = ((double)((a.real) * (b.real)) + (double)((a.imag) * (b.imag))) / (pow(b.real, 2) + pow(b.imag, 2));
	double imagnum = ((double)((b.real) * (a.imag)) - (double)((a.real) * (b.imag))) / (pow(b.real, 2) + pow(b.imag, 2));

	cout << "Division of the complex numbers amounts to: " << realnum; if (imagnum < 0) { cout << "- " << (imagnum * -1) << "i" << endl; }
	else cout << " + " << imagnum << "i" << endl;
}

void Methods::polar(Methods a) 
{
	const double toDegrees = 180.0 / 3.141593;
	double r = sqrt((pow(a.real, 2)) + (pow(a.imag, 2)));
	double theta = atan(a.imag / a.real) * toDegrees;
	cout << "The distance from 0,0 is : " << r << "and the angle of the radius is : " << theta << endl;
}
void Methods::magnitude(Methods a) 
{
	double mag = sqrt(pow(a.real,2) + pow(a.imag,2));
	cout << "The magnitude is " << mag << endl;
} // Sqrt ( realSq + imagSq);
void Methods::angle(Methods a) 
{
	const double toDegrees = 180.0 / 3.141593;
	double theta = atan(a.imag / a.real) * toDegrees;
	cout << "The angle of the imaginary number is :" << theta << endl;
} 
