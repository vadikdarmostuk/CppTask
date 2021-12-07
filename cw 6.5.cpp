

#include <iostream>

unsigned seq_bits(unsigned n){
    unsigned i=1, r=0, max_r=0;
    for(;i<=(n<<1);i<<=1){
        if(i&n){
            r++;
        }
        else{
            if(max_r<r){
                max_r=r;
            }
            r=0;
        }
    }
    return max_r;
}

int main() {
    unsigned n;
    printf("n=\n");
    scanf("%u", &n);
    printf("max=%u\n",seq_bits(n));
}
