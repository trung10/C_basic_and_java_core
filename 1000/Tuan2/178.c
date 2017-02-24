#include <stdio.h>

void lietKeCacSoTrongMangMotChieu(int a[], int n, int x, int y){
    int i;
    for(int = 0; i < n; i++){
        if((a[i] <= y) && (a[i] >= x)){
                if(a[i] % 2 == 0)
                    printf("%0.3f", a[i]);
        }
    }
}
