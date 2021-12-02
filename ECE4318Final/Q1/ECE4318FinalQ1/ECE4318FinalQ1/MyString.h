#pragma once
#include <iostream>
#include <string.h>
using namespace std;
class MyString
{
public:
	char* charArray;
	MyString();
	MyString(char inputarray[]);
	MyString(const MyString &obj);
	void Compare(MyString strang1, MyString strang);
	void Copy(char c1[]);
	void PrintString();
	void Concatenate(char two[]);
	int GetLength(char arry[]);
	void ToUppercase();
	void ToLowercase();
	void Substring(int begin, int end);
	~MyString();
private:
	
	
};

