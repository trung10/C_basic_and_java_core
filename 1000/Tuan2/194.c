
#include <stdio.h>
#include <math.h>

void lietKeCacSoTrongMangMotChieu(int a[], int n){
    int i , j, x;
    float xa;
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n; j++){
            if(i != j){
            if(j == 0){
                xa = fabs(a[i] - a[i + 1]);
                x = a[j];
            }
            if(xa > fabs(a[i] - a[j])){
                    xa = fabs(a[i] - a[j]);
                    x = a[j];

               }
            }
        }
        printf("(%d ,%d) ", a[i], x);
    }
}

void main(){
    int a[5] = { 6 , 5 , 5, 7 , 1};
    lietKeCacSoTrongMangMotChieu(a, 5);
}

