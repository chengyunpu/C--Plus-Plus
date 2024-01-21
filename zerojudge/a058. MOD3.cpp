#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    int b = 0;
    int c = 0;
    int d = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a % 3 == 0)
        {
            b++;
        }
        else if ((a - 2) % 3 == 0)
        {
            c++;
        }
        else if ((a - 1) % 3 == 0)
        {
            d++;
        }
    }
    cout << b << " " << d << " " << c;
}