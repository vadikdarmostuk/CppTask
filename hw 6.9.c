#include <iostream>
using namespace std;

int main()
{
    int a, i = -1;
    cout << "input digit: ";
    cin >> a;
    do
    {
        if (i == 0)
        {
            cout << "number of right bit: " << i << endl;
        }
        a /= 2;
        i++;
    } while (a != 0);
    cout << "number of left bit: " << i;
}
