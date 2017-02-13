#include <stdio.h>
#include <math.h>

int isSoNguyenTo(int n, int i){
    if(n < 2)
        return 0;
    else{

        if(n == i)
            return 1;
        else{
               return (n%i) ? isSoNguyenTo(n , i+1) : 0;
        }
    }
}
void main(){
    int n;
    printf("Nhap so nguyen muon kiem tra so nguyen to: ");
    scanf("%d", &n);
    printf("%d", isSoNguyenTo(n, 2));
}
