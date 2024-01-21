#include <iostream>
using namespace std;

int main()
{
    int n;
    int a;
    cin >> n;
    while (n != 0)
    {
        n--;
        bool k = false;
        cin >> a;
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                k = true;
                break;
            }
        }
        if (k)
        {
            cout << "N" << endl;
        }
        else
            cout << "Y" << endl;
    }
}