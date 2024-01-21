#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    while (cin >> n)
    {
        if (n == int(EOF))
        {
            break;
        }
        else
        {
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
}