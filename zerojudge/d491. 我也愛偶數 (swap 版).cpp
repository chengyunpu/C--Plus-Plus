#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int temp;
    if (a < b)
    {
        for (int i = a; i <= b; i++)
        {
            if (i % 2 == 0)
            {
                temp += i;
            }
        }
        cout << temp;
    }
    else
    {
        for (int i = b; i <= a; i++)
        {
            if (i % 2 == 0)
            {
                temp += i;
            }
        }
        cout << temp;
    }
}