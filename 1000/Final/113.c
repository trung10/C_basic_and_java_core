#include <stdio.h>
#include <math.h>

int giathua(unsigned int n){
    if(n < 2)
        return 1;
    return n * giathua(n - 1);
}

float sinx(float x, int n){
    if( n < 0)
        return 0;
    return (powf( -1, n) * powf(x,(float) (2*n + 1) / giathua(2 * n + 1))) + sinx(x, n - 1);
}

void main(){
    printf("%f", sinx(2 , 2));
}
