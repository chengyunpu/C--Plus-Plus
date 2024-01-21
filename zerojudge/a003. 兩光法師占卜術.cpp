#include <iostream>
using namespace std;

int main()
{
    int m, d;
    while (cin >> m >> d)
    {
        if ((m * 2 + d) % 3 == 0)
            cout << "普通";
        else if ((m * 2 + d) % 3 == 1)
            cout << "吉";
        else
            cout << "大吉";
    }
}