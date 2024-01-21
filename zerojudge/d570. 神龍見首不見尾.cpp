#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = s.size(); i >= 0; i--)
    {
        for (int k = 0; k < i; k++)
        {
            cout << s[k];
        }
        cout << endl;
    }
}