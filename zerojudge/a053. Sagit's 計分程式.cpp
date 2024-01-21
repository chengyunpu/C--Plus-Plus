#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    if (n <= 10)
    {
        cout << n * 6;
    }
    else if (n > 10 && n <= 20)
    {
        cout << 10 * 6 + (n - 10) * 2;
    }
    else if (n > 20 && n <= 40)
    {
        cout << 10 * 6 + 10 * 2 + (n - 20);
    }
    else
        cout << 100;
}