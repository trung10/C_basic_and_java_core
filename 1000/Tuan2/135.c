#include <stdio.h>

void timgiatriduongdauten(float a[], int n){
    int i;
    for(i = 0; i < n; i++){
        if(a[i] > 0){
            return i;
        }
    }
    return -1;
}

