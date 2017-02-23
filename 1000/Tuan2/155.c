#include <stdio.h>
#include <math.h>

float timGiaTriXaXNhat(float a[], int n, int x){
    int i, k = 0;
    float xanhat = fabs(x - a[0]);
    for(i = 1; i < n; i++){
        if(xanhat < fabs(x - a[i])){
            xanhat = fabs(x - a[i]);
            k = i;
        }
    }
    return a[k];
}

void main(){
float a[5] = {1, 6, 5, 9, 2.3};
printf("%f", timGiaTriXaXNhat(a, 5, 9));
}
