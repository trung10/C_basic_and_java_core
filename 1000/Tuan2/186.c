
#include <stdio.h>
#include <math.h>

void lietKeCacSoTrongMangMotChieu(float a[], int n){
    int i;
    float soAm = timSoAmDauTien(a, n);
    for(int = 0; i < n ; i++){
        if(soAm){
                if(soAm == a[i])
                    printf("%d ", i);
    }
}

float timSoAmDauTien(float a[], int n){
    int i;
    float soAm = 0;
    for(i = 0; i < n; i++){
        if(a[i] < 0){
            soAm = a[i];
            break;
        }
    }
    return soAm;
}


