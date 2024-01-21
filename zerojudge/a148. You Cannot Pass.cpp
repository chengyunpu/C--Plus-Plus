#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    while (cin >> a)
    {
        float temp = 0;
        for (int i = 0; i < a; i++)
        {
            float b;
            cin >> b;
            temp += b;
        }
        if (temp / a > 59)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
}