#include <iostream>
using namespace std;
int main()
{
    int h, m;
    cin >> h >> m;
    if (m + 30 >= 60)
    {
        printf("%02d:%02d", (24 + h + 3) % 24, (60 + m + 30) % 60);
    }
    else
        printf("%02d:%02d", (24 + h + 2) % 24, (60 + m + 30) % 60);
}