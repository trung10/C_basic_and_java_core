#include <stdio.h>

int timViTriNhoNhat(float a[], int n){
    int i, vitri = 0;
    for(i = 1; i < n; i++){
        if(a[vitri] > a[i]){
            vitri = i;
        }
    }
    return vitri;
}

void main(){
float a[5] = {5, 9, 9, 2, -2.3};
printf("%d", timViTriNhoNhat(a, 5));
}
