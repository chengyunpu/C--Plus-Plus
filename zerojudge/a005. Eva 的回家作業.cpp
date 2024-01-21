#include <iostream>
using namespace std;

int main()
{
    int t, a, b, c, d;
    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c >> d;
        cout << a << ' ' << b << ' ' << c << ' ' << d << ' ';

        if ((b - a) == (c - b))
        {
            cout << d + d - c;
        }
        else
        {
            cout << d * d / c;
        }

        cout << endl;
    }
}