#include <stdio.h>
#include <math.h>

int giaTriDauTien2muK(int a[], int n){
    int i, s = 0;
    for(i = 0; i < n ; i++){
        if(la2muK(a[i])){
                s = a[i];
                break;
        }
    }
    return s;
}

int la2muK(unsigned int n){
    float i = log2f(n);
    return (i - (int) i) ? 0 : 1;
}

void main(){
    int a[5] = {1, 2, 5, 7, 2};
    printf("%d", giaTriDauTien2muK(a, 5));
}
