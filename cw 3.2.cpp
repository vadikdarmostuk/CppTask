
#include <iostream>
#include <stdio.h>
int main() {
    int x, x1, x2, x3;
    printf("x=\n");
    scanf("%d", &x);
    x1=x%10;
    x2=((x-x1)/10)%10;
    x3=(x-10*x2-x1)/100;
    if (x1==x2 and x1==x3){
        return 0;
    } else {
        printf(" %d\n",100*x1+10*x2+x3);
        printf(" %d\n",100*x1+10*x3+x2);
        printf(" %d\n",100*x2+10*x1+x3);
        printf(" %d\n",100*x2+10*x3+x1);
        printf(" %d\n",100*x3+10*x2+x1);
        printf(" %d\n",100*x3+10*x1+x2);
    }
}
