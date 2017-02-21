#include <stdio.h>
#include <math.h>


int ktTraGiamDam(unsigned int n){
    int a, b;
    while(n > 0){
         a = n % 10;
         n /= 10;
         if(n < 10)
            return 1;
         b = n % 10;
         if(a >= b)
            return 0;
        n /= 10;
    }
    return 1;
}

void main(){
    printf("20 giam dan tu trai sang phai?  %d", ktTraGiamDam(20));
}
