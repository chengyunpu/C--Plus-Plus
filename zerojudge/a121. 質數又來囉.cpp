#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        int n = 0;
        for (int j = max(a, 2); j <= b; j++)
        {
            bool isPrime = true;

            if (j % 2 == 0 && j > 2)
            {
                isPrime = false;
            }
            else
            {
                for (int i = 3; i <= sqrt(j); i += 2)
                {
                    if (j % i == 0)
                    {
                        isPrime = false;
                        break;
                    }
                }
            }

            if (isPrime)
            {
                n++;
            }
        }
        cout << n << endl;
    }
}