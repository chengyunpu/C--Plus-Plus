#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int k = n - i; k > 0; k--)
    {
      cout << "_";
    }
    for (int j = 1; j <= i * 2 - 1; j++)
    {
      cout << "*";
    }
    for (int k = n - i; k > 0; k--)
    {
      cout << "_";
    }
    cout << endl;
  }
}