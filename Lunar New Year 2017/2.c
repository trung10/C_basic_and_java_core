#include <stdio.h>
#include <math.h>

int isSoChinhPhuong(int n){
    if(isSoNguyen(sqrt(n))){
        return 1;
    }
    return 0;
}

int isSoNguyen(double n){
    //double  a = (int) n;
    if((n - (int) n) == 0){
        return 1;
    }
    return 0;
}

void main(){
    printf("Nhap 1 so nguyen: ");
    int a;
    scanf("%d", &a);
    if(isSoChinhPhuong(a)){
        printf("%d la so chinh phuong", a);
    }else{
        printf("%d khong la so chinh phuong", a);
    }
}
