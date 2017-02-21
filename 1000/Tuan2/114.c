#include <stdio.h>
#include <math.h>

int tong1N(unsigned int n){
    int tong = 0, i;
    for(i = 0; i <= n; i++)
        tong += i;
    return tong;
}

void lietKeUoc(unsigned int n){
    int i;
    for(i = 1; i <= n/2; i++){
        if(n % i == 0)
            printf("%3d", i);
    }
}
int demChuSo(unsigned int n){
    int i = 0;
    for(;n > 0;){
        i++;
        n /= 10;
    }
    return i;
}
int giathua(unsigned int n){
    if(n < 2)
        return 1;
    return n * giathua(n - 1);
}
