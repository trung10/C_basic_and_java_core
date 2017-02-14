#include <stdio.h>
#include <math.h>

int tongDay12345678n(int n){
    if(n < 1)
        return 0;
    return n + tongDay12345678n(n - 1);
}

int timLN(int max){
    int i, m = 0;
    for(i = 1; i < max; i++){
        if(tongDay12345678n(i) > max){
            m = i - 1;
            break;
        }
    }
     return m;
}
void main(){
    printf("Max = 1000, m = %d", timLN(1000));
}

