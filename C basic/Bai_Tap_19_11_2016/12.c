//13 12 18 30
#include <stdio.h>
#include <math.h>
void main(){
    int a, b, c;
    ac:
    printf("ax2 + bx  + c = 0: Nhap a b c: ");
    scanf("%d %d %d",&a,&b,&c);
    int delta;
    if(a==0){
        printf("\nNhap lai");
        goto ac;
    }else{
        delta = b*b-4*a*c;
        if(delta<0){
            printf("Phung trinh vo nghiem");
        }else if(delta==0){
            printf("Phuong trinh co 1 nghiem  %f", -b/(2*a));
        }else{
            printf("Phuong trinh co 2 nghiem  %.3f %.3f", (((-b-sqrt(delta))/(2*a))), (((-b+sqrt(delta))/(2*a))));
        }
    }
}
