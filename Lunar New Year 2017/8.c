#include <stdio.h>

int GiaiThua(int n){
    return (n <= 1) ? 1 : n * GiaiThua(n - 1);
}

int kCn(int k, int n){
    return (k > n) ? -1 : GiaiThua(n)/(GiaiThua(k) * GiaiThua(n - k));
}

void main(){
    int k, n;
    printf("Nhap to hop chap k cua n: ");
    scanf("%d%d", &k, &n);
    printf("\nKet qua: %d", kCn(k, n));
}
