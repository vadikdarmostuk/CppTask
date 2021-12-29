#include <iostream>
using namespace std;
int sign(float x)
{
    if (x >= 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    float start = 0.001, end = 1.5, prec, dx, xi;
    cout << "input precision: ";
    cin >> prec;
    if (prec <= 0)
    {
        cout << "wrong digit\n";
        goto l;
    }
    while ((end - start) > prec)
    {
        dx = (end - start) / 2;
        xi = start + dx;
        if (sign(tan(start) - start) != sign(tan(end) - end))
        {
            end = xi;
        }
        else
        {
            start = xi;
        }
    }
    cout << "find the root of the equation: " << xi;


l:
    cout << "";
}
