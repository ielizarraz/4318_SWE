#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
const int exito = -99;
int main()
{
    int mod = 0; int x = 0; int test = 0; double testP2 = 0; double testP3 = 0;

    int y1 = 0; int y2 = 0;
    
    
    while (true) {
        x = 0;
    cout << "Enter the mod power for problem 3 : ";
    cin >> mod;
        while (x != -99)
        {
            cout << "Enter a value or -99 to exit the solution loop : ";

            cin >> x;
            if (x == -99) { break; }
            test = (int)(pow(x, 3) + x + 1);

            testP2 = sqrt(test);

            while (ceil(testP2) != floor(testP2))
            {

                test += mod;

                testP2 = sqrt(test);

                testP3 = sqrt(test) * 2;
            }

            y1 = (int)testP2;

            if ((mod - y1) < 0)
            {
                test = (int)(pow(x, 3) + x + 1);

                testP2 = sqrt(test);

                while (ceil(testP2) != floor(testP2))
                {
                    test -= mod;

                    testP2 = sqrt(test);

                    testP3 = sqrt(test) * 2;

                }

                y1 = (int)testP2;
            }
            while (y1 > mod)
            {
                y1 -= mod;
            }
            if (y1 % mod != 0)
            {
                y2 = mod - y1;

                cout << "Solutions : (" << x << " , " << y1 << ")" << " , " << "(" << x << " , " << y2 << ")" << endl;

            }
            else
            {
                y2 = mod - y1;

                cout << "Solutions : (" << x << " , " << y2 << ")" << endl;

            }
        }
    }
    return 0;
}