#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    long long int n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        cout << int(s[i]) << "_";
    }
    cout << int(s[n - 1]);
}