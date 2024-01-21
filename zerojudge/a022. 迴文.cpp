#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int ii = n - 1;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == s[ii])
        {
            ii -= 1;
        }
        else
            temp = -1;
    }
    if (temp != -1)
    {
        cout << "yes";
    }
    else
        cout << "no";
}