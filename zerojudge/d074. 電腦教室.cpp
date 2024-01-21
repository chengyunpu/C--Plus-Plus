#include <iostream>
using namespace std;

int main()
{
    int n, temp = 0;
    cin >> n;

    while (n--)
    {
        int num;
        cin >> num;

        if (num > temp)
        {
            temp = num;
        }
    }
    cout << temp;
}