#include <stdio.h>

int IsPri(int n, int i){
    if(i == n)
        return 1;
    return (n % i) ? IsPri(n, i+1) : 0;
}

void main(){
    printf("%d", IsPri(99, 2));
}

