#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp;

    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        temp = 100 - ((x - 0) + (y - 0));

        if (temp > 0 && temp <= 30)
        {
            cout << "sad!" << endl;
        }
        else if (temp > 30 && temp <= 60)
        {
            cout << "hmm~~" << endl;
        }
        else if (temp > 60 && temp < 100)
        {
            cout << "Happyyummy" << endl;
        }
        else
        {
            cout << "evil!!" << endl;
        }
    }
}