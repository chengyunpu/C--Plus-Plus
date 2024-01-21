#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int k[n];
        for (int i = 0; i < n; i++)
        {
            cin >> k[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (k[i] < k[j])
                {
                    swap(k[j], k[i]);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << k[i] << " ";
        }
        cout << endl;
    }
}