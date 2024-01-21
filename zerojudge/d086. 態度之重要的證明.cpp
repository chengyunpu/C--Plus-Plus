#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    while (s != "0")
    {
        int n = s.size();
        int temp = 0;
        bool a = true;

        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                temp += int(s[i]) - 'A' + 1;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                temp += int(s[i]) - 'a' + 1;
            }
            else
            {
                cout << "Fail" << endl;
                a = false;
                break;
            }
        }
        while (a)
        {
            cout << temp << endl;
            break;
        }
        cin >> s;
    }
}