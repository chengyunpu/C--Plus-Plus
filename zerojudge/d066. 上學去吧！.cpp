#include <iostream>
using namespace std;

int main()
{
    int hh, mm;
    cin >> hh >> mm;
    if (hh >= 17)
    {
        cout << "Off School";
    }
    else if (hh >= 7 && mm >= 30 || hh >= 8 && mm >= 0)
    {
        cout << "At School";
    }
    else
        cout << "Off School";
}