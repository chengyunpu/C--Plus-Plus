#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    while (cin >> a)
    {
        a = (pow(a, 3) + 5 * a + 6) / 6;
        cout << a << endl;
    }
}