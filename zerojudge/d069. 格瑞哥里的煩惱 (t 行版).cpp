#include <iostream>
using namespace std;

int main()
{
    int t, n = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (n % 4 != 0)
        {
            cout << "a normal year" << endl;
        }
        else
        {
            if (n % 100 == 0 && n % 400 != 0)
            {
                cout << "a normal year" << endl;
            }
            else if (n % 4 == 0)
            {
                cout << "a leap year" << endl;
            }
        }
    }
}