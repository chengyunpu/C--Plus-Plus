#include <iostream>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    int a[n];
    int b = 0; //+
    int c = 0; //-
    int B = x; //+
    int C = x; //-
    int tempB = 0;
    int tempC = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > x) //+
        {
            b += 1;
            tempB = a[i];
            if (tempB > B)
            {
                B = tempB;
            }
        }
        else if (a[i] < x)
        {
            c += 1;
            tempC = a[i];
            if (tempC < C)
            {
                C = tempC;
            }
        }
    }
    if (b > c)
    {
        cout << b << " " << B << endl;
    }
    else
    {
        cout << c << " " << C << endl;
    }
}