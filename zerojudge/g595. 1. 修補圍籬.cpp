#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int temp = 0;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 0)
        {
            if (s[i - 1] < s[i + 1])
            {
                temp += s[i - 1];
            }
            else
                temp += s[i + 1];
        }
    }
    cout << temp;
}