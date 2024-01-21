#include <iostream>
using namespace std;

int main()
{
    string(s);
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        int temp = abs(int(s[i]) - int(s[i + 1]));
        cout << temp;
    }
}