#include <iostream>
using namespace std;
int main()
{
    int a, b, r, x, y;
    cin >> a >> b;
    x = a;
    y = b;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    cout << a;
}