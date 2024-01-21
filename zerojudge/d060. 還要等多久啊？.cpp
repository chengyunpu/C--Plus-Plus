#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a == 25)
        cout << "0";
    else if (a > 25)
        cout << 60 - a + 25;
    else
        cout << 25 - a;
}