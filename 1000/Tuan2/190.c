
#include <stdio.h>
#include <math.h>

void lietKeCacSoTrongMangMotChieu(int a[], int n){
    int i;
    for(int = 0; i < n ; i++){
        if(laSoToanLe(a[i])){
                    printf("%d ", a[i]);
    }
}
}

int laSoToanLe(int n){
    while(n > 0){
        if((n % 10) % 2 == 0){
                return 0;
                break;
        }
        n /= 10;
    }
    return 1;
}

