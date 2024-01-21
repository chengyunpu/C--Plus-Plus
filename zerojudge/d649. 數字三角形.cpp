#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = n; j > i; j--)
            {
                cout << '_';
            }
            for (int k = 0; k < i; k++)
            {
                cout << '+';
            }
            cout << endl;
        }
    }
}