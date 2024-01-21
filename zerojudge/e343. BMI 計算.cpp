#include <iostream>
using namespace std;
int main()
{
    float BMI, w, h;
    cin >> w >> h;
    BMI = w / (h * h);
    printf("%2.1f", BMI);
}