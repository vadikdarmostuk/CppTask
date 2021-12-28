#include <iostream>
#include <windows.h>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int i = 0;
    float result = 0, val;
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    string a, b = "";
    getline(cin, a);
        do {
            if (a[i] == ',' || i == a.length())
            {
                val = stof(b);
                result = log(val);
                if (to_string(result).length() > 10)
                {
                    cout << "None\n";
                }
                else
                {
                    cout << endl << "Число: " << val << endl << "Логарифм натуральний: " << result << endl << "Наукове представлення: " << scientific << result << endl;
                }
                b = "";
            }
            else
            {
                b += a[i];
            }
            i++;
        } while (i <= a.length());
}
