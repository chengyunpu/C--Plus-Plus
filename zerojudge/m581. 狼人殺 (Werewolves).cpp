#include <iostream>

using namespace std;

int main()
{
    int n, w = 0;
    int t = 0;

    cin >> n;
    int s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] < 0)
        {
            w++;
        }
        else if (s[i] >= 0)
        {
            t++;
        }
    }

    int b, tl = 0, wl = 0, nb = 0;

    while (true)
    {
        cin >> b;
        if (b == 0)
        {
            break;
        }
        if (s[b - 1] != 5)
        {
            if (s[b - 1] < 0)
            {
                wl += 1;
                s[b - 1] = 5;
            }
            else if (s[b - 1] >= 0)
            {
                tl += 1;
                s[b - 1] = 5;
            }
        }
        else
        {
            nb = 1;
        }
    }

    int tt = w - wl;

    if (nb == 1)
    {
        cout << "Wrong";
    }
    else
    {
        if (tt > 0 && nb != 1)
        {
            cout << "Werewolves";
        }
        else
        {
            cout << "Townsfolk";
        }
    }
}