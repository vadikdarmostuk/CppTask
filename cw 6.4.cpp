
#include <iostream>

int main() {
    unsigned n;
    printf("n=\n");
    scanf("%u", &n);
    unsigned m=sizeof(n)*8;
    unsigned m1=m-8;
    n=((n&255)<<m1)|(n>>m1)|(((n>>8)<<m)>>m1);

    printf("m=%u\n %x\n",n,n);
}
