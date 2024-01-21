#include <iostream>
using namespace std;
int main()
{
    float a;
    cin >> a;
    int b = a;
    if ((a * 9) / 5 + 32 == (b * 9) / 5 + 32)
    {
        cout << ((b * 9) / 5 + 32) << endl;
    }
    else
        cout << (a * 9) / 5 + 32 << endl;
}