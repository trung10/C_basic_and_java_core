
#include <stdio.h>
#include <math.h>

int lietKeCacSoTrongMangMotChieu(int a[], int n){
    int i, ln = 0, k;
    for(i = 0; i < n ; i++){
        if(laSo5muK(a[i])){
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

int laSo5muK(unsigned int n){
    float a = n;
    if(n == 1)
        return 1;
    while(a >= 5){
        if(a % 5)
            return 0;
        a /= 5;
    }
    return 1;
}



