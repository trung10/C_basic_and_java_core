

#include <stdio.h>
#include <math.h>

int dkLaSoGanh(int n){
    int i = 0;
    while(n > 0){
        i++;
        n /= 10;
    }
    if((i % 2) && (i >= 3))
        return 1;
    return 0;

}
int laSoGanh(unsigned int a){
    if(a < 10)
        return 1;
    int n = a % 10;
    int s = a, i = 0;
    while(s > 0){
        if(s < 10)
            break;
        s /= 10;
        i++;
    }
    if(s != n)
        return 0;
    int b = (a - s * pow(10, i)) / 10;
    return laSoGanh(b);
}
int kiemTraSoGanh(int n){
    if(dkLaSoGanh(n)){
        return laSoGanh(n);
    }
    return 0;
}
int soGanhDauTien(int a[], int n){
    int i, s = 0;
    for(i = 0; i < n; i++){
        if(kiemTraSoGanh(a[i])){
            s = a[i];
            break;
        }
    }
    return s;
}
void main(){
    int a[5] = {969, 79297, 2, 7, 3};
    printf("%d", soGanhDauTien(a, 5));
}
