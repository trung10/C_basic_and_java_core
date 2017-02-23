#include <math.h>

int laSoNguyenTo(unsigned int n){
    int i;
    for(i = 2; i < sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return 0;
}

int timSoNguyenToCuoiCung(int a[], int n){
    int i;
    int soNguyenTo = -1;
    for(i = n - 1; i <= 0; i--){
        if(a[i] > 0){
            if(laSoNguyenTo(a[i])){
                soNguyenTo = a[i];
                break;
            }
        }
    }
    return soNguyenTo;
}

