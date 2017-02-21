#include <stdio.h>

int kiemTraCungDau(float a, float b){
    if((a * b) < 0)
        return 0;
    return 1;
}

void main(){
    printf("Kiem tra tra thu 2.2 va -98 co cung dau: %d", kiemTraCungDau(2.2, -98));
}
