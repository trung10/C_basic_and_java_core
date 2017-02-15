#include <stdio.h>
#include <math.h>

double kT2K(long int n){
    return log2(n);
}
int isSoNguyen(double n){
    if(n - (int) n)
        return 0;
    return 1;
}
void main(){
    printf("1024 la so 2 ^ k? %d", isSoNguyen(kT2K(1024)));
}

