#include <stdio.h>
#include <math.h>

int tongDay12345678n(int n){
    if(n < 1)
        return 0;
    return n + tongDay12345678n(n - 1);
}

int main(){
    int i;
    for(i = 500; i > 10; i--){
        if(tongDay12345678n(i) < 1000){
            printf("%d", i + 1);
            break;
        }
    }
     printf("%d", tongDay12345678n(45));
     return 0;
}
