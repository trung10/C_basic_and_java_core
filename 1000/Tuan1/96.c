#include <stdio.h>
#include <math.h>

float tinh(float x){
    return (x < 5) ? -2 * powf(x, 2) + 4 * x - 9 : 2 * powf(x, 2) + 5 * x + 9;
}
void main(){
    printf("f(5) = %0.3f", tinh(5));
}
