#include <stdio.h>

void tuyetDoi(float* a, float *b, float *c){
    *a = *a < 0 ? -*a : *a;
    *b = *b < 0 ? -*b : *b;
    *c = *c < 0 ? -*c : *c;
}

void main(){
    float a = -8, b = 9, c = -12;
    printf("Truoc : %f %f %f", a, b, c);
    tuyetDoi(&a, &b, &c);
    printf("\n%f %f %f", a, b, c);
}
