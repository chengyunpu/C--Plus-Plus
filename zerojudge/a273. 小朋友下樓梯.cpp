#include <iostream>
using namespace std;

int main()
{
    int n, a;
    while (cin >> n >> a)
    {
        if (n == 0)
        {
            cout << "Ok!" << endl;
        }
        else if (a == 0)
        {
            cout << "Impossib1e!" << endl;
        }
        else if (n % a == 0)
        {
            cout << "Ok!" << endl;
        }
        else
        {
            cout << "Impossib1e!" << endl;
        }
    }
}