
#include <stdio.h>
#include <math.h>

int timSo(int a[], int n){
    int i, ln = maxDay(a, n), k;
    if(ln < 2)
        return 2;
    while(1){
        ln++;
        if(laSoNguyenTo(ln))
            break;
    }
    return ln;
}

int maxDay(int a[], int n){
    int i, m = a[0];
    for(i = 1; i < n; i++){
            if(m < a[i])
                m = a[i];
    }
    return m;
}
int laSoNguyenTo(unsigned int n){
    int i;
    for(i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return 0;
    }
    return 1;
}
void main(){
    int a[5] = {2, 6, 2, 7, 3};
    printf("%d", timSo(a, 5));
}

