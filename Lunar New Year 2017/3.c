#include <stdio.h>
#include <math.h>

int a, b, c;
double delta;

void main(){


    printf("aX2 + bX + c = 0, nhap a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
    delta = (double)(b*b - 4 * a * c);
    //printf("%f", delta);
    if(a = 0)
        printf("Khong phai la phuong trinh bac 2");
    else{
        if(delta < 0)
            printf("Phuong trinh vo nguyen");
        else{
            if(delta == 0)
                printf("Phuong trinh co nghiem kep %0.5f", (float) -b/(2*a));
            else{
                printf("Phuong trinh co 2 nghiem %lf va %lf", (double) (-b + sqrt(delta))/(2*a), (double) (-b - sqrt(delta))/(2*a));
            }
        }

    }
}
