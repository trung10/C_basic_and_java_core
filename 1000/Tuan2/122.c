#include <stdio.h>

float timLN(float a[], int n){
    int i;
    float lonnhat = a[0];
    for(i = 0; i < n; i++){
        if(lonnhat < a[i])
            lonnhat = a[i];
    }
    return lonnhat;
}

void main(){
    float a[5] = {1, 5, 7, 3, 7};
    printf("%f", timLN(a, 5));
}
