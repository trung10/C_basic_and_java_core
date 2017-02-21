#include <stdio.h>

void giaiPhuongTrinhBacNhat(float a, float b){
    if(a == 0){
        printf("suy bien");
        if(b = 0)
            printf("Vo so nghiem");
        else
            printf("Vo nghiem");
    }

    printf("Phuong trinh co 1 nghiem %f", (-b/a));
}

void main(){
    printf("Giai phuong trinh 2x + 16 = 0\n");
    giaiPhuongTrinhBacNhat(2, 16);
}
