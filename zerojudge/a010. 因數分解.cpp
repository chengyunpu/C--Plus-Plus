#include <iostream>
using namespace std;

void factorial(int n)
{
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    for (int i = 2; i <= n; i++)
    {
        int p = 0;
        while (n % i == 0)
        {
            p++;
            n /= i;
        }
        if (p != 0)
        {
            if (p == 1)
                cout << i << " ";
            else
                cout << i << "^" << p << " ";
            if (n > 1)
                cout << "*"
                     << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    while (cin >> n)
        factorial(n);
}