#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, f;
    cin >> a;
    b = (a >= 0 && a <= 5) * 0;
    c = (a >= 6 && a <= 11) * 590;
    d = (a >= 12 && a <= 17) * 790;
    e = (a >= 18 && a <= 59) * 890;
    f = (a >= 60) * 399;
    cout << b + c + d + e + f;
}