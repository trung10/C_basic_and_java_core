
#include <stdio.h>
#include <math.h>

int lietKeCacSoTrongMangMotChieu(int a[], int n){
    int i, ln = 0, k;
    for(i = 0; i < n ; i++){
        if(laSoToanLe(a[i])){
                ln = a[i];
                k = i;
                break;
    }
}
    for(i = k + 1; i < n ; i++){
            if(laSoToanLe(a[i])){
                    if(a[i] > ln)
                        ln = a[i];
        }
    }
    return ln;
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


