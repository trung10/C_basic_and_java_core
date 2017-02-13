#include <stdio.h>

int isSoBanNguyen(double n){
    if(isSoNguyen(n - 0.5))
        return 1;
    return 0;
}

int isSoNguyen(double n){
    if((n - (int) n) == 0)
        return 1;
    return 0;
}

void main(){
    printf("Nhap so can kiem tra la so ban nguyen: ");
    double n;
    scanf("%lf", &n);
    if(isSoBanNguyen(n))
        printf("%f la so ban nguyen", n);
    else
        printf("%f khong la so ban nguyen", n);
}


