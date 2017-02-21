#include <stdio.h>

void inTangDan0BienPhu(float a, float b, float c){
    if(a > b)
        inTangDan0BienPhu(b, a, c);
    if(b > c)
        inTangDan0BienPhu(a, c, b);
    if(a <= b && b <= c)
        printf("%0.3f %0.3f %0.3f", a, b, c);
}

void main(){
    inTangDan0BienPhu(6, 2, 6);
}
