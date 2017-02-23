#include <stdio.h>

float timSoDuongNhoNhat(float a[], int n){
    int i;
    float viTri = -1;
    for(i = 0; i < n; i++){
        if(a[i] > 0){
            viTri = i;
            break;
        }
    }
    for(i = viTri + 1; i < n; i++){
        if(a[i] > 0){
        if(a[viTri] > a[i]){
            viTri = i;
        }
        }
    }
    return viTri;
}



