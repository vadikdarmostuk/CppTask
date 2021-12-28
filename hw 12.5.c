#include <iostream>
#include <windows.h>
#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int i = 0;
    float result;
    SetConsoleOutputCP(1251);
    string a, b = "";
    ifstream in("file.txt");
    in.seekg(0, in.end);
    int len = in.tellg();
    char c;
    while (len--)
    {
        in.seekg(len, in.beg);
        c = in.get();
        if (c == 32 || c == '\n')
        {
            if (b.length() > 0)
            {
                for (i = b.length() - 1; i >= 0; i--)
                {
                    a += b[i];
                }
                result = sqrt(stoi(a));
                a = "";
                b = "";
                cout << std::fixed << std::setprecision(3) << result << endl;
            }
        }
        else
        {
            b += c;
        }
    }
}
