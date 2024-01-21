#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a % 3 == 0)
        cout << a / 3;
    else
        cout << a / 3 + 1;
}