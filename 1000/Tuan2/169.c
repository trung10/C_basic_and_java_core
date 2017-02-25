
#include <stdio.h>
#include <math.h>

int lietKeCacSoTrongMangMotChieu(int a[], int n){
    int i, ln = maxDay(a, n), k;
    if(ln % 2)
        return ln + 1;
    return n + 2;
}

int maxDay(int a[], int n){
    int i, m = a[0];
    for(i = 1; i < n; i++){
            if(m < a[i])
                m = a[i];
    }
    return m;
}
