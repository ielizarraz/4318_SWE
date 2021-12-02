// ECE4318FinalQ1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "MyString.h"
#include <iostream>
using namespace std;
int main()
{
    char str2[] = "Happy ";
    char str3[] = "Birthday!";
    char str4[] = "It was the best of times, it was the worst of times.,,,";
    char str5[] = "Four scores and seven years ago, our fathers brought forth on this continent,..";

    MyString* stringObj1 = new MyString();
    MyString* stringObj2 = new MyString(str2);
    MyString* stringObj3 = new MyString(str3);
    MyString* stringObj4 = new MyString(str4);
    MyString* stringObj5 = new MyString(str5);

    stringObj2->PrintString();
    stringObj3->PrintString();
    stringObj4->PrintString();
    stringObj5->PrintString();
    
    cout << "Comparing 2 and 3 , then 2 and 2 " << endl;
    stringObj2->Compare(*stringObj2, *stringObj3);
    stringObj2->Compare(*stringObj2, *stringObj2);

    cout << "Copying str 4 to 3" << endl;
    stringObj3->Copy(stringObj4->charArray);

    cout << "Concatenation of 5 with 4::: " << endl;
    stringObj4->Concatenate(stringObj5->charArray);

    cout << "Substring of 4 with parameters 20 to 30" << endl;

    stringObj3->Substring(20, 30); cout << endl;

    cout << "Uppercase of string 2" << endl;

    stringObj2->ToUppercase();
    stringObj2->PrintString();
    cout << "Lowercase of string 2" << endl;

    stringObj2->ToLowercase();
    stringObj2->PrintString();

    cout << "Char Length of String 2" << endl;

    cout << stringObj2->GetLength(stringObj2->charArray) << endl;


    string tester = "Well hello failing grade!";
    string secondtester = "Goodbye passing grade!";
    cout << "StrClass Compare" << endl;
    cout << tester.compare(secondtester) << endl;
    cout << "StrClass Copy" << endl;
   
    cout << "StrClass concatenation" << endl;
    cout << "StrClass substring" << endl;
    cout << "StrClass Lowercase" << endl;
    cout << "StrClass uppercase" << endl;


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
