
#include <stdio.h>
#include <math.h>

void lietKeCacSoTrongMangMotChieu(int a[], int n){
    int i;
    int so = timSoDuongNhoNhat(a, n);
    for(int = 0; i < n ; i++){
        if(so != -1){
                if(so == a[i])
                    printf("%d ", i);
    }
}

int timSoChanLonNhat(int a[], int n){
    int i, k;
    int SoDuong = - 1;
    for(i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            SoDuong = a[i];
            i = k;
            break;
        }
    }
    for(i = k + 1; i < n; i++){
        if(a[i] % 2 == 0){
                if(a[i] > SoDuong)
                    SoDuong = a[i];
        }
    }
    return SoDuong;
}



