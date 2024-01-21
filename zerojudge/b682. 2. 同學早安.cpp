#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int h1 = 0;
    int h2 = 0;
    int m1 = 0;
    int m2 = 0;
    cin >> h1 >> m1;
    cin >> h2 >> m2;
    int temp1, temp2;
    if (m2 < m1)
    {
        h2 = h2 - 1;
        temp2 = m2 + 60 - m1;
    }
    else
        temp2 = m2 - m1;
    if (h2 < h1)
    {
        temp1 = (h2 + 24 - h1) % 24;
    }
    else
        temp1 = (h1 - h2) % 24;
    cout << abs(temp1) << " " << temp2;
}