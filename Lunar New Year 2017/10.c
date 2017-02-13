#include <stdio.h>

int UCLN(int a, int b){
    if(a < b){
        return UCLN(b, a);
    }
    return (a = a % b) ? (UCLN(a, b)) : b;
}

int BCNN(int a, int b){
    if(a < b)
        return BCNN(b, a);
    int i = 1;
    while(((a*i) % b))
        i++;
    return a * i;
}

void main(){
    int a[5]= {10,4,6,8,2}, n, i;
    n = 1;
    int m = a[0];
    for(i = 0; i < 5; i++){
        n = BCNN(n , a[i]);
        if(i == 0)
            continue;
        m = UCLN(m, a[i]);
    }
    printf("BCNN: %d, UCLN: %d", n, m);
}
