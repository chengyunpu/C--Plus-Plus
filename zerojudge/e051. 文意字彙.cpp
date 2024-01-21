#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            cout << s[i];
        }
        else
            cout << "_";
    }
}