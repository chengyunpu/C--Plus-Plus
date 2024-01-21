#include <iostream>
using namespace std;

int main()
{
    string s, ss;
    getline(cin, s);
    int n = s.size();
    getline(cin, ss);
    for (int i = 0; i < n; i++)
    {
        if (s[i] != ' ')
        {
            cout << s[i];
        }
        else if (s[i] == ' ')
        {
            cout << " " << ss << " ";
        }
    }
}