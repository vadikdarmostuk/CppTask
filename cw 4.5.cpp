

#include <iostream>
#include <cmath>

int fakt(int(n)){
    int x=1;
    if (n%2==1){
        for (int i=1; i<n+1; i=i+2){
            x=x*i;
        }
    }
    else {
        for (int i=2; i<n+1; i=i+2){
            x=x*i;
        }
    }
    return x;
}
int main() {
    int n;
    printf("n=\n");
    scanf("%d", &n);
    printf("%d\n", fakt(n));
}
