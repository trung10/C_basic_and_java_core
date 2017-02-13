#include <stdio.h>

int GiaiThua(int n){
    if(n <= 1)
        return 1;
    return n * GiaiThua(n - 1);
}

void main(){
    printf("Nhap mot so nguyen muo tim giai thua: ");
    int n;
    scanf("%d", &n);
    printf("%d", GiaiThua(n));
}
