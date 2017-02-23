#include <stdio.h>

float timSoDuongNhoNhat(float a[], int n){
    int i;
    float nhoNhat = -1;
    for(i = 0; i < n; i++){
        if(a[i] > 0){
            nhoNhat = a[i];
            break;
        }
    }
    for(i = 0; i < n; i++){
        if(a[i] > 0){
            if(nhoNhat < a[i]){
                nhoNhat = a[i];
            }
        }
    }
    return nhoNhat;
}


