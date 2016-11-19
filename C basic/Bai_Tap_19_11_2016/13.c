//13 12 18 30
#include <stdio.h>
#include <math.h>

void main(){
    int a, b, c;
    float x, y, z, delta;
    ac:
    printf("ax4 + bx2  + c = 0: Nhap a b c: ");
    scanf("%d %d %d",&a,&b,&c);
    delta = b*b-4*a*c;
    x = (float)(-b/(2*a));
    y = (float)((-b-sqrt(delta))/(2*a));
    z = (float)((-b+sqrt(delta))/(2*a));
    if(a==0){
        printf("\nNhap lai");
        goto ac;
    }else{

        if(delta<0){
            printf("Phung trinh vo nghiem");
        }else if(delta==0){
            if(x<0){
                printf("Phung trinh vo nghiem");
            }else{
            printf("Phuong trinh co 2 nghiem  %.3f %.3f", sqrt(x),-sqrt(x));
            }
        }else{
            if(y<0&&z<0){
                printf("Phuong trinh vo nghiem");
            }else if((y<0)&&(z>0)){
                printf("Phuong trinh co 2 nghiem  %.3f %.3f", sqrt(z),-sqrt(z));
            }else if((y>0)&&(z<0)){
                printf("Phuong trinh co 2 nghiem  %.3f %.3f", sqrt(y),-sqrt(y));
            }else{
                printf("Phuong trinh co 4 nghiem  %.3f %.3f %.3f %.3f", sqrt(y),-sqrt(y), sqrt(z),  -sqrt(z));
            }
        }
    }
}

