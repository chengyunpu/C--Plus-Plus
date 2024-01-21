#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int temp = 0;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                temp += i;
            }
        }
        if (temp > n)
        {
            cout << "盈數" << endl;
        }
        else if (temp == n)
        {
            cout << "完全數" << endl;
        }
        else
            cout << "虧數" << endl;
    }
}