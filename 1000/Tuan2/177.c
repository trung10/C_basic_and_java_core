#include <stdio.h>

void lietKeCacSoTrongMangMotChieu(float a[], int n, int x, int y){
    int i;
    for(int = 0; i < n; i++){
        if((a[i] <= y) && (a[i] >= x)){
            printf("%0.3f", a[i]);
        }
    }
}
