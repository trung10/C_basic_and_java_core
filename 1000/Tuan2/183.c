#include <stdio.h>
#include <math.h>

void lietKeCacSoTrongMangMotChieu(float a[], int n){
    int i;
    float lonNhat = giaTriLonNhat(a, n);
    for(int = 0; i < n ; i++){
        if(a[i] = lonNhat){
                printf("%0.3f ", a[i]);
    }
}

float giaTriLonNhat(float a[], n){
    int i;
    float lonNhat = a[i];
    for(i = 1; i < n; i++){
        if(lonNhat < a[i])
            lonNhat = a[i];
    }
    return lonNhat;
}
