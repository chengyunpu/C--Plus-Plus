#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int nn = 0;
    cin >> n >> nn;
    int a = 0;
    int b;
    for (int i = n; i <= nn; i++)
    {
        if (i % 4 != 0)
        {
            // cout<<"平年\n";
            b++;
        }
        else
        {
            if (i % 100 == 0 && i % 400 != 0)
            {
                // cout<<"平年\n";
                b++;
            }
            else if (i % 4 == 0)
            {
                // cout<<"閏年\n";
                a++;
            }
        }
    }
    cout << a;
}