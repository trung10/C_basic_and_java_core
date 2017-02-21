#include <stdio.h>
#include <malloc.h>

int tichChuSo(unsigned int n){
    if(n > 0){
        return (n % 10) * tichChuSo(n / 10);
    }
    return 1;
}
void main(){
    printf("%d", tichChuSo(456));
}
