#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int T;
    cin >> T;

    for (int i = 1; i <= T; ++i)
    {

        int a, b;
        cin >> a >> b;

        int sum = 0;
        for (int j = a; j <= b; ++j)
        {
            double sq = sqrt(j);
            if (sq == floor(sq))
            {
                sum += j;
            }
        }

        cout << "Case " << i << ": " << sum << endl;
    }
}