#include <iostream>
#include <cmath>
using namespace std;
float isReLu(float a, float x)
{
    if (x >= 0)
    {
        return x;
    }
    else
    {
        return x / (sqrt(1 + a * pow(x, 2)));
    }
}
int main()
{
    cout << isReLu(1, 2) << endl;
    cout << isReLu(1, -2);

}
