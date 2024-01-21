#include <iostream>
using namespace std;

int main()
{
    string s, ns;
    cin >> s;
    int n = s.size();
    int temp = n - 1;
    int nn = 0;
    for (int i = 0; i < n; i++)
    {
        ns[temp] = s[i];
        temp--;
    }
    bool a = false;
    for (int i = 0; i < n; i++)
    {
        if (ns[i] != '0')
        {
            a = true;
        }
        if (a == true)
        {
            cout << ns[i];
        }
        else
        {
            nn++;
            continue;
        }
    }
    if (n == nn)
    {
        cout << '0';
    }
}