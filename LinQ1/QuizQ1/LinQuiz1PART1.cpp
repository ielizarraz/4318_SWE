// LinQuiz1PART1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;


int main()
{
	int matrices[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };

	int n = 3, flag = 0;

	cout << "Enter the integer you wish to search for " << endl;
	int item;
	cin >> item;

	for (int col = 0; col < 3; col++)
	{
		for (int row = 0; row < 3; row++)
		{
			if (item == matrices[row][col])
				flag = 1;
		}
	}

	if (flag == 1)
	{
		cout << "found";
	}
	else {
		cout << "not found";
	}

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
