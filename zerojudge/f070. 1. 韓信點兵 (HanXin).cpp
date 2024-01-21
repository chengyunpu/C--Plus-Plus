#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int n = 0;

    for (; n < 99999999; n++)
    {
        bool z = false;
        bool x = false;
        bool cc = false;
        if ((n - b) % a == 0)
        {
            z = true;
        }
        if ((n - d) % c == 0)
        {
            x = true;
        }
        if ((n - f) % e == 0)
        {
            cc = true;
        }

        if (z == true && x == true && cc == true)
        {
            cout << n;
            break;
        }
    }
}