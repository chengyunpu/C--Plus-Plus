#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int t = max({a, b, c});
    if (t * t == a * a + b * b + c * c - t * t)
    {
        cout << "right triangle";
    }
    else if (t * t > a * a + b * b + c * c - t * t)
    {
        cout << "obtuse triangle";
    }
    else
    {
        cout << "acute triangle";
    }
}