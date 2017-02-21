#include <stdio.h>

int timSoLonNhat(int a, int b, int c){
    if(a > b)
        return timSoLonNhat(a, a, c);
    if(b > c)
        return timSoLonNhat(a, b, b);
    if(c > a)
        return timSoLonNhat(c, b, c);
    return a;
}

void main(){
    printf("%d", timSoLonNhat(-582, 9, -44));
}
