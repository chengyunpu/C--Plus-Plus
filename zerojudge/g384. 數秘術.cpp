#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int k;
    for (int i = 0; i < n; i++)
    {
        k += s[i] - 64;
    }
    cout << k;
}