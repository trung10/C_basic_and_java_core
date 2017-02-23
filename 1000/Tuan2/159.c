#include <stdio.h>
#include <math.h>

float timGiaTriDauTienLonHon2003(float a[], int n){
    int i;
    float k = a[0];
    for(i = 1; i < n; i++){
        if(a[i] > 2003){
            k = a[i];
            break;
        }
    }
    return k;
}
void main(){
float a[5] = {1, 6, 2009, 9, 2008};
printf("%f", timGiaTriDauTienLonHon2003(a, 5));
}
