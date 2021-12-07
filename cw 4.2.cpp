
#include <iostream>
#include <cmath>

int fakt1(int(n)){
    int x=1;
    for (int i=1; i<n+1; i=i+1){
        x=x*i;
    }
    return x;
}
int fakt2(int(n)){
    int x=1;
    for (int i=n; i>0; i=i-1){
        x=x*i;
    }
    return x;
}

int main() {
    int n;
    printf("n=\n");
    scanf("%d", &n);
    printf("%d\n", fakt1(n));
    printf("%d\n", fakt2(n));
}
