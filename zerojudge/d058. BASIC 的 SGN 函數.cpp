#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    while (cin >> a)
        cout << (a > 0) - (a < 0);
}