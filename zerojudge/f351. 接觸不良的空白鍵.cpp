#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int n = s.size();
    bool k = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ' && k != false)
        {
            k = false;
            cout << ' ';
        }
        else if (s[i] == ' ' && k == false)
        {
            continue;
        }
        else if (s[i] != ' ')
        {
            k = true;
            cout << s[i];
        }
    }
}