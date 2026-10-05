#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, A, B, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        A = 1.0 / x + 4.0;

        if (x <= 1.0)
        {
            B = 8.0 + 0.65 * x;
        }
        else if (x <= 5.0)
        {
            double arg = (6.1 + x) / 2.0;
            B = log(x) + (cos(arg) / sin(arg)); // ctg(arg) = cos(arg)/sin(arg)
        }
        else
        {
            B = sqrt(x + sqrt(2.0));
        }

        y = A - B;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}