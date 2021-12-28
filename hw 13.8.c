#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 0, j = 0;
    string a, b = "", c = "", bufer;
    getline(cin, a);
        do {
            if (a[i] == ' ' || i == a.length())
            {
                if (b.length() > 0)
                {
                    do
                    {
                        if (b[j] != b[b.length() - 1])
                        {
                            bufer += b[j];
                        }
                        j++;
                    } while (j <= b.length());
                    j = 0;
                    c += bufer;
                    b = "";
                    bufer = "";
                }
                c += a[i];
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
