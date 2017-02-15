#include <stdio.h>
#include <math.h>


int ktTraTangDan(unsigned int n){
    int a, b;
    while(n > 0){
         a = n % 10;
         printf("%d", a);
         n /= 10;
         if(n < 1)
            return 0;
         b = n % 10;
         printf("%d", b);
         if(a <= b)
            return 0;
        n /= 10;
    }
    return 1;
}

void main(){
    printf("\n123456 tang danh tu trai sang phai?  %d", ktTraTangDan(12));
}



