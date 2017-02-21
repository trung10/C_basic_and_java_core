#include <stdio.h>
#include <math.h>

void ktTamGiac(float a, float b, float c){
    if(a > b)
        ktTamGiac(b, a, c);
    if(b > c)
        ktTamGiac(a, c, b);
    if(a + b < c){
        printf("Khong pahi tam giac");
        return;
    }
    if((a == b) || (b == c) || (c == a)){
        if( (a == b) && (b == c)){
            printf("Tam giac deu");
            return;
        }
        printf("Tam giac can");
    }

    if(a*a + b*b == c*c )
        printf(" Tam giac vuong");
}

void main(){
    ktTamGiac(3, 5, 4);
}
