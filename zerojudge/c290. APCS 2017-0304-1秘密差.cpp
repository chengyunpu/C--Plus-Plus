#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int temp1 = 0;
    int temp2 = 0;
    int n = s.size();
    for (int i = 0; i < n; i += 2)
    {
        temp1 += s[i] - '0';
    }
    for (int i = 1; i < n; i += 2)
    {
        temp2 += s[i] - '0';
    }
    cout << abs(temp1 - temp2);
}