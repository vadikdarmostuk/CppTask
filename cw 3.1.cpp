
#include <iostream>
#include <stdio.h>
int main() {
    int x, x1, x2, x3;
    printf("x=\n");
    scanf("%d", &x);
    x1=x%10;
    x2=((x-x1)/10)%10;
    x3=(x-10*x2-x1)/100;
    printf("Кількість одиниць %d\n",x1);
    printf("Кількість десятків %d\n",x2);
    printf("Кількість сотень %d\n",x3);
    printf("Сума цифр  %d\n",x1+x2+x3);
    printf("Число, при читанні заданого числа справа на ліво %d\n",100*x1+10*x2+x3);
    return 0;
}
