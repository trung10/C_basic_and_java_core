#include <stdio.h>
#include <math.h>

int laSoChinhPhuong(unsigned int n){
    return (sqrtf(n) - (int) sqrtf(n)) ? 0 : 1;
}

int tim(int a[], int n){
    int i;
    int k = -1;
    for(i = 0; i < n; i++){
        if(a[i] > 0){
        if((laSoChinhPhuong(a[i]))){
            k = a[i];
            break;
        }
        }
    }
    return k;
}
void main(){
int a[5] = {1, 25, 2009, 9, 9};
printf("%d", tim(a, 5));
}

