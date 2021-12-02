#include "MyString.h"
#include <iostream>
using namespace std;

MyString::MyString()
{
	  charArray =  NULL;
	

}
MyString::MyString(char inputarray[])
{
	charArray = new char[sizeof(inputarray)];
	charArray = inputarray;
	
}
void MyString::PrintString()
{
	cout << charArray << endl;
}
MyString::MyString(const MyString &obj)
{
	charArray = new char[sizeof(&obj.charArray)];
	for (int i = 0; i < sizeof(&obj.charArray); i++)
	{
		//charArray[i] = obj.charArray[i];
	}
}

void MyString::Compare(MyString strang1, MyString strang2)
{
	int flag = 0;
	for (int i = 0; i < GetLength(strang2.charArray); i++)
	{
		if (strang1.charArray[i] != strang2.charArray[i]) 
		{
			flag = 1;
		}
	}
	
	if (flag == 0)
	{
		cout << "The two strings from each obj are equivalent" << endl;


	}
	else
	{
		cout << "The two strings from each obj are not equivalent" << endl;
	}
}
void MyString::Copy(char inputarray[])
{
	charArray = new char[sizeof(inputarray)];
	charArray = inputarray;
	cout << charArray << " : Copied " << endl;
}
int MyString::GetLength(char arry[])
{
	int i = 0;
	while (arry[i] != NULL)
	{
		i++;
	}
	return i;
}
void MyString::Concatenate(char two[])
{
	int sizec1 = GetLength(charArray); +1;
	for (int i = sizec1; i < (GetLength(charArray) + GetLength(two)); i++)
	{
		charArray[i] = two[i - sizec1];

	}
	

	cout << charArray << endl;
}

void MyString::ToLowercase()
{
	for (int i = 0; i < GetLength(charArray); i++)
	{
		if (charArray[i] <= 90 && charArray[i] >= 65)
		{
			charArray[i] = charArray[i] + 32;
		}
	}
}

void MyString::ToUppercase()
{
	for (int i = 0; i < GetLength(charArray); i++)
	{
		if (charArray[i] <= 122 && charArray[i] >= 97)
		{
			charArray[i] = charArray[i] - 32;
		}
	}
}

void MyString::Substring(int begin, int end)
{
	for (int i = begin; i < end; i++)
	{
		cout << charArray[i];
	}
}

MyString::~MyString()
{
	delete charArray;
}