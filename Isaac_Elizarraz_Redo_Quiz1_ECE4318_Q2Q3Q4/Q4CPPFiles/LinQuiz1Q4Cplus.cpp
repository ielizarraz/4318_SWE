// LinQuiz1Q4Cplus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Methods.h"
using namespace std;
int main2()
{
   
    Methods DiscoObj;
    DiscoObj.real = 1;
    DiscoObj.imag = 1;
    DiscoObj.print(DiscoObj);
    Methods ConstantObj;
    ConstantObj.real = 1;
    ConstantObj.imag = 1;
    ConstantObj.print(ConstantObj);
    Methods IsaacsObj;
    IsaacsObj.real = 1;
    IsaacsObj.imag = -1;

    IsaacsObj.div(DiscoObj, IsaacsObj);

    for (int i = 0; i < 100; i++) { DiscoObj.mul(DiscoObj, ConstantObj); }

    Methods Omega;
    Omega.real = (double)-1 / 2;
    Omega.imag = (double)3 / 2;
    Omega.print(Omega); // OVERFLOW
    Methods Omega1;
    Omega1.real = (double)-1 / 2;
    Omega1.imag = (double)3 / 2;
    Omega1.print(Omega);
    for (int i = 0; i < 300; i++) { Omega.mul(Omega, Omega1); } // OVERFLOW
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
