#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 0;
    string a, b = "", c = "";
    getline(cin, a);
        do {
            if (a[i] == ' ' || i == a.length())
            {
                if (b.length() > 0)
                {
                    if (c.length() > 0)
                    {
                        c += ',';
                    }
                    c += b;
                    b = "";
                }
            }
            else
            {
                b += a[i];
            }
            i++;
        } while (i <= a.length());
        c += '.';
        cout << c;
}
