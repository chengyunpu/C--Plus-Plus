#include <iostream>
using namespace std;
int main()
{
    int n;
    int temp = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        temp += a * i;
    }
    cout << temp;
}