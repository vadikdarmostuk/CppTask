
#include <iostream>
#include <stdio.h>
int main() {
    int x, y, z, a, b;
    printf("x, y, z\n");
    scanf("%d, %d, %d", &x, &y, &z);
    printf("a)\n");
    a=2048;
    b=2097152;
    if (abs(x)<a and abs(y)<a and abs(z)<a){
        printf(" %d\n",x*y*z);
    }
    printf("b)\n");
    if (abs(x)<b and abs(y)<b and abs(z)<b){
        printf(" %d\n",x*y*z);
    }
}
