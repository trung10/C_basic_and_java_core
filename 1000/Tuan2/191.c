
#include <stdio.h>
#include <math.h>

void lietKeCacSoTrongMangMotChieu(float a[], int n){
    int i;
    if(a[0] > a[1]){
        printf("%0.3f ", a[0]);
    }
    if(a[n] > a[n - 1]){
        printf("%0.3f ", a[n]);
    }
    for(int = 1; i < n - 1 ; i++){
        if((a[i] > a[i + 1]) && (a[i] > a[i - 1]))
            printf("%0.3f ", a[i]);
}
}

