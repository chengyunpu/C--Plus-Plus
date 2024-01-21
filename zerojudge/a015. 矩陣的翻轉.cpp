#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, column;
    while (cin >> row >> column)
    {
        int num[row][column];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
                cin >> num[i][j];
        }
        for (int j = 0; j < column; j++)
        {
            for (int i = 0; i < row; i++)
                cout << num[i][j] << " ";
            cout << endl;
        }
    }
}