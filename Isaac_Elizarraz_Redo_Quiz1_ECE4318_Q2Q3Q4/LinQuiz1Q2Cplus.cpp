
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main4()
{
    int row = 0;
    int col = 0;
    int  i = 0;
    double matrix1[3][3] = { {0.9, 0.075, 0.025} ,
                             {0.15, 0.8, 0.05} ,
                             {0.25, 0.25, 0.5} };

    double matrix2[2][2] = { {0.5, 0.3}, 
                            {0.54, 0.25} };


    int TotalForRow1 = 0;
    int TotalForRow2 = 0;
    double RowOneSum = 0;
    double RowTwoSum = 0;

    int TotalOfColumnsOne = 0;
    int TotalOfColumnsTwo = 0;
    double SumOfColumnOne = 0;
    double SumOfColumnTwo = 0;

    //begin 3x3 Matrix
    cout << "3 x 3 Matrix:";
    for (col = 0; col < 3; col++)
    {
        SumOfColumnOne = 0; RowOneSum = 0; cout << endl;

        for (row = 0; row < 3; row++)
        {
            RowOneSum += matrix1[col][row];

            cout << matrix1[col][row] << "\t";

            if (RowOneSum == 1) {

                TotalForRow1 += 1;

            }

            SumOfColumnOne += matrix1[row][col];

            if (SumOfColumnOne == 1) {

                TotalOfColumnsOne += 1;
            }
        }

    }
    cout << endl << endl;
    // Begin 2x2 matrix
    cout << "2 x 2 Matrix:";
    for (col = 0; col < 2; col++)
    {
        RowTwoSum = 0; SumOfColumnTwo = 0; cout << endl;

        for (row = 0; row < 2; row++)
        {
            RowTwoSum += matrix2[col][row];

            cout << matrix2[col][row] << "\t";

            if (RowTwoSum == 1) {

                TotalForRow2 += 1;

            }

            SumOfColumnTwo += matrix2[row][col];

            if (SumOfColumnTwo == 1) {

                TotalOfColumnsTwo += 1;
            }
        }
    }
    cout << endl << endl;

    cout << "Searching rows|" << endl;
    if (TotalForRow1 == 3)
    {
        cout << "3 x 3 matrix is a Markov Chain with rows = 1.";
    }
    else
    {
        cout << "3 x 3 matrix is not a Markov Chain with rows = 1.";
    }
    cout << endl;
    if (TotalForRow2 == 2)
    {
        cout << "2 x 2 matrix is a Markov Chain with rows = 1.";
    }
    else {
        cout << "2 x 2 matrix is not a Markov Chain with rows = 1.";

        cout << endl;

        // ptC
        cout << endl;
        cout << "Searching columns|" << endl;
        if (TotalOfColumnsOne == 3)
        {
            cout << "3 x 3 matrix is a Markov Chain with columns = 1.";
        }
        else
        {
            cout << "3 x 3 matrix is not a Markov Chain with columns = 1.";
        }
        cout << endl;
        if (TotalOfColumnsTwo == 2)
        {
            cout << "2 x 2 matrix is a Markov Chain with columns = 1.";
        }
        else {
            cout << "2 x 2 matrix is not a Markov Chain with columns = 1.";
        }
        cout << endl << endl;

        double matrix55[5][5] =
        {

             {0.2, 0.2, 0.2, 0.2, 0.2} ,
             {0.15, 0.1, 0.12, 0.33, 0.3 } ,
             {0, 0.25, 0.3, 0.25, 0.2} ,
             {0.05, 0.1, 0.3, 0.4, 0.15 } ,
             {0.25, 0.25, 0.15, 0.23 ,0.12 }

        };

        cout << "A 5x5 matrix satisying Markov can be shown as below: " << endl;

        for (int i = 0; i < 5; i++)
        {
            for (int n = 0; n < 5; n++)
            {
                cout << matrix55[i][n] << "\t";
            }
            cout << endl;
        }

        return 0;
    }
}