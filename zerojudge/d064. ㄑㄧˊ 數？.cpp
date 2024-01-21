#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    while (cin >> a)
        if (a % 2 == 0)
        {
            cout << "Even" << endl;
        }
        else
        {
            cout << "Odd" << endl;
        }
}