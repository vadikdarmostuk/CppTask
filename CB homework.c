#include<iostream>
#include <math.h>
using namespace std;
int main()
{
   int r,h,s;
   cin >> r;
   cin >> h;
   s = M_PI*r*r*h; // M_PI == pi
   cout << "s=" << s;
    return 0;
}

