#pragma once
#include <iostream>
#include "string.h"
using namespace std;
template <typename T>
class Matrix
{
public:
	
	Matrix()
	{
		Mclass = Nclass = 0;
	}
	Matrix(int M, int N)
	{
		M = (t**) new T * [Mclass];

		// allocate mem for pointer array

		for (int i = 0; i < Mclass; i++)
		{
			M[i] = (T*)new T[n];

		}

		for (int i = 0; i < Mclass; i++)
			for (int j = 0; j < n; j++)
				M[i][j] = 0;
	}
	// Copy COnstructor
	MATRIX(const MATRIX& _M)
	{
	
		Mclass = _M.Mclass;
		Nclass = _M.Nclass;

		
		M = (T**) new T * [Mclass]; 

		for (int i = 0; i < Mclass; i++)
			M[i] = (T*) new T[Nclass];

		// fill with values
		for (int i = 0; i < Mclass; i++)
			for (int j = 0; j < Nclass; j++)
				M[i][j] = _M.M[i][j];
	}
	T GetMij(int i, int j)
	{
		if ((Mclass > 0) && (Nclass > 0))
			return M[i][j];
		else
			return 0;
	}

	void SetMij(int i, int j, T value)
	{
		if ((i < 0) || (i >= Mclass))
			return;
		if ((j < 0) || (j >= Nclass))
			return;
		M[i][j] = value;
	}

	void SetMij(double i, double j, T value)
	{
		if ((i < 0) || (i >= Mclass))
			return;
		if ((j < 0) || (j >= Nclass))
			return;
		M[i][j] = value;
	}
	void Print(const char* ObjName)
	{
		cout << "Object: " << ObjName << endl;
		for (int i = 0; i < Mclass; i++)
		{
			for (int j = 0; j < Nclass; j++)
				cout << M[i][j] << "\t";
			cout << endl;
		}
		cout << "---------------------" << endl << endl;
	}

	void ScalarMul(int scalar)
	{

	}
		void Add(Matrix A);
		void Subtract(Matrix A);
		bool equals(Matrix A);
		void Multiple(Matrix A);

		~MATRIX()
  {
    if (n > 0)
    {
      // release the memory allocated for each row
      for (int i = 0; i < m; i++)
        delete[] M[i];
    }

    if (m > 0)
      delete[] M;
  }
};

private:
	
	int Mclass;
	int Nclass;
	T** M;
};

