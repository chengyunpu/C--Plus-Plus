#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, t = 0;
    cin >> n;

    while (t < n)
    {
        string s;
        cin >> s;

        int T = 1;
        for (int i = 0; i < s.size(); i++)
        {
            int temp = s[i] - '0';
            T *= temp;
        }

        cout << T << endl;
        t++;
    }
}