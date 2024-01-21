#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c, d, e;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c >> d >> e;
        if (((c * 60 + d) - (a * 60 + b)) < e)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}