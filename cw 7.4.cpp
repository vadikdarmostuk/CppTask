

#include <iostream>

#define N 5

int main(){
    int mas[N];
    for (int i=0; i<N; i++){
        printf("a[%d]=", i);
        scanf("%d", &mas[i]);
    }
    int max=mas[0];
    for (int i=0; i<N; i++){
        if(mas[i]>max) max=mas[i];
    }
    printf("max=%d\n",max);
}
