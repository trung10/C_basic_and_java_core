#include <stdio.h>

int GiaiThua(int n){
    if(n <= 1)
        return 1;
    return n * GiaiThua(n -1);
}
int kAn(int k, int n){
    return (k <= n) ? GiaiThua(n)/GiaiThua(n - k) : -1;
}
void main(){
    int k, n;
    printf("Nhap chinh hop chap k cua n: ");
    scanf("%d%d", &k, &n);
    printf("Ket qua: %d", kAn(k, n));
}

