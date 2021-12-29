#include <iostream>
using namespace std;

int main()
{
    int i = 0, a, b, signa, signb;
    cout << "input digit: ";
    cin >> a;
    if (a >= 0)
    {
        signa = 0;
    }
    else
    {
        signa = 1;
    }
    do
    {
        cout << "input digit: ";
        cin >> b;
        if (b == 0)
        {
            break;
        }
        if (b >= 0)
        {
            signb = 0;
        }
        else
        {
            signb = 1;
        }
        if (signa != signb)
        {
            i++;
        }
        a = b;
        signa = signb;
    } while (a != 0);
    cout << "number of sign changes: " << i;
}
