#include <math.h>

int laSoNguyenTo(unsigned int n){
    int i;
    for(i = 2; i < sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return 0;
}

int timSoNguyenLonNhat(int a[], int n){
    int i, k;
    int soNguyenTo = -1;
    for(i = i; i < n; i++){
        if(a[i] > 0){
            if(laSoNguyenTo(a[i])){
                k = i;
                soNguyenTo = a[i];
                break;
            }
        }
    }
    for(i = k; i < n; i++){
        if(a[i] > 0){
            if(laSoNguyenTo(a[i])){
                if(soNguyenTo < a[i])
                    soNguyenTo = a[i];
            }
        }
    }
    return soNguyenTo;
}

