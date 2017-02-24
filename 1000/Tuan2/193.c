
#include <stdio.h>
#include <math.h>

void lietKeCacSoTrongMangMotChieu(int a[], int n){
    int i;
    for(i = 0; i < n ; i++){
        if(la3muK(a[i])){
                    printf("%d ", a[i]);
    }
}
}

int la3muK(int n){
    float a = n;
    while(a >= 1){
        if(a < 3)
            break;
        a /= 3;
    }
    return (a == 1) ? 1 : 0;
}


