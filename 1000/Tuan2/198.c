
#include <stdio.h>
#include <math.h>

void lietKeCacSoTrongMangMotChieu(float a[], int n){
    int i;
    float so = timSoLonNhat(a, n);
    for(int = 0; i < n ; i++){
        if(so == a[i]){
                    printf("%d ", i);
    }
}

float timSoLonNhat(float a[], int n){
    int i;
    float ln = a[0];
    for(i = 0; i < n; i++){
        if(a[i] > ln){
                ln = a[i];
        }
    }
    return ln;
}



