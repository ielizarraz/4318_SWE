#pragma once
class Methods
{
public:
	long double real;
	long double imag;
	Methods();
	void add(Methods a, Methods b);
	void mul(Methods &a, Methods &b);
	void print(Methods a);
	void sub(Methods a, Methods b);
	void div(Methods a, Methods b);
	void polar(Methods a);
	void magnitude(Methods a); // Sqrt ( realSq + imagSq);
	void angle(Methods a); //arctan(imag/real);



};