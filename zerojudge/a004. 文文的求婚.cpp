#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    while (cin >> n)
        if (n % 4 != 0)
        {
            cout << "平年\n";
        }
        else
        {
            if (n % 100 == 0 && n % 400 != 0)
            {
                cout << "平年\n";
            }
            else if (n % 4 == 0)
            {
                cout << "閏年\n";
            }
        }
}