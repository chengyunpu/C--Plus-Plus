#include <iostream>
using namespace std;
int main()
{
    {
        int x;
        while (cin >> x)
        {
            cout << x * (x - 1) + 2 << "\n";
        }
    }
}