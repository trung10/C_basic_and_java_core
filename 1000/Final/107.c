#include <stdio.h>
#include <math.h>

float canBacN(float x, int canBacnCuax){
    return powf(x, (float )1 / canBacnCuax);
}

void main(){
    printf("Can bac 3 cua 27 = %0.3f", canBacN(27, 3));
}
