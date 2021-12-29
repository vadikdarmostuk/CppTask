#include <iostream>
using namespace std;
int check_num(int a)
{
    int b = (int(a / 10) + (float(a) / 10 - int(a / 10)) * 10);
    if (b > 9)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int b = 0;
    do {
        cout << "input digital: ";
        cin >> b;
        if (b > 99 || b < 10)
        {
            cout << "wrong number\n";
        }
    } while (b < 100 && b < 9);
    cout << check_num(b);
}
