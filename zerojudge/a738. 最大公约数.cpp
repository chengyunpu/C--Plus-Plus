#include <iostream>
using namespace std;
int main()
{
    int temp, a, b;
    while (cin >> a >> b)
    {
        while (b != 0)
        {
            temp = b;
            b = a % b;
            a = temp;
        }
        cout << a << endl;
    }
}