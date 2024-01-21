#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, x1, x2 = 0;
    cin >> a >> b >> c;
    x1 = b * b - 4 * a * c;
    x2 = sqrt(x1);
    if (x1 < 0)
    {
        cout << "No real root";
    }
    else if (x1 == 0)
    {
        cout << "Two same roots x=" << (-b - x2) / (2 * a);
    }
    else
    {
        cout << "Two different roots x1=" << (-b + x2) / (2 * a) << " , "
             << "x2=" << (-b - x2) / (2 * a);
    }
}