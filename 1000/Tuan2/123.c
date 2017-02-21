#include <stdio.h>

int searchIndex(int a[], int n){
    int i, index = 0;
    float lonnhat = a[0];
    for(i = 0; i < n; i++){
        if(lonnhat > a[i]){
            index = i;
            lonnhat = a[i];
        }

    }
    return index;
}

void main(){
    float a[5] = {1, 5, 7, 3, 7};
    printf("%d", searchIndex(a, 5));
}

