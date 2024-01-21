#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    int a[n];
    bool n1 = false;
    bool n2 = false;
    int temp = 0;
    int temp1 = 200;
    int temp2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        if (a[i] >= 60)
        {
            n1 = true;
            temp1 = min(temp1, a[i]);
        }
        else
        {
            n2 = true;
            temp2 = max(temp2, a[i]);
        }
    }
    cout << endl;
    if (n2 == true)
    {
        cout << temp2 << endl;
    }
    else
    {
        cout << "best case" << endl;
    }
    if (n1 == true)
    {
        cout << temp1 << endl;
    }
    else
    {
        cout << "worst case" << endl;
    }
}