#include <iostream>
using namespace std;
int main()
{
    string S, T;
    int a, b = 0;
    cin >> S;
    cin >> T;
    for (int i = 0; i < T.size(); i++)
    {
        bool X = true;

        for (int j = 0; j < S.size(); j++)
        {
            if (S[j] == T[i])
            {
                cout << j + 1 << " ";
                S[j] = ' ';
                X = false;
                break;
            }
        }

        if (X)
        {
            cout << "X ";
        }
    }
}