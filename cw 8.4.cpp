

#include <iostream>
#define N 25
#define M 25

void vvod_ts4(int matr[N][M], unsigned n, unsigned m){
    for(int i=0; i<n; ++i){
        printf("\nРядок %d ",i);
        for(int j=0; j<m; ++j){
            scanf(" %d", &matr[i][j]);
        }
    }
}

void vyvod(int matr[N][N], unsigned n, unsigned m){
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            printf("%d, ",matr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matr[N][M];
    int n,m;
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);
    vvod_ts4(matr, n, m);
    vyvod(matr, n, m);

}
