#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, T, t;
    while (cin >> a >> b >> c >> d)
        if (a * 60 + b > c * 60 + d)
            cout << 60 * 24 - (a * 60 + b) + c * 60 + d << endl;
        else if (a * 60 + b < c * 60 + d)
            cout << (c * 60 + d) - (a * 60 + b) << endl;
        else if (a == c && b == d && a + b + c + d != 0)
            cout << "0" << endl;
        else
            break;
}