#include <iostream>
using namespace std;

int main()
{
    long long int a, b, c, n = 0;
    while (cin >> a >> b >> c)
    {
        if (a / 10 >= c / 2)
        {
            n = c / 2;
        }
        else
        {
            n = a / 10;
        }

        cout << a << " 個餅乾，" << b + n << " 盒巧克力，" << c << " 個蛋糕。" << endl;
    }
}