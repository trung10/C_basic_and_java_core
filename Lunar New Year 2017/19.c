#include <stdio.h>

float day111n(int n){
    return (n < 1) ? 0 : (float) 1/n + day111n(n - 1);
}

void main(){
    printf("Day = %f khi n = 5", day111n(5));
}
