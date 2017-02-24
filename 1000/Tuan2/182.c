#include <stdio.h>
#include <math.h>

void lietKeCacSoTrongMangMotChieu(int a[], int n){
    int i;
    for(int = 0; i < n ; i++){
        if((a[i - 1] * a[i] < 0) || (a[i + 1] * a[i] < 0 )){
                    printf("%0.3f ", a[i]);
    }
}
