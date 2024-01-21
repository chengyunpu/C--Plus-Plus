#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    if (n % 4 != 0)
    {
        cout << "a normal year";
    }
    else
    {
        if (n % 100 == 0 && n % 400 != 0)
        {
            cout << "a normal year";
        }
        else if (n % 4 == 0)
        {
            cout << "a leap year";
        }
    }
}