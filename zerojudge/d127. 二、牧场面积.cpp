#include <iostream>
using namespace std;

int main()
{
    long long int a;
    while (cin >> a)
        if (a % 4 == 0)
        {
            cout << a / 4 * a / 4 << "\n";
        }
        else
        {
            cout << a / 4 * (a / 4 + 1) << "\n";
        }
}