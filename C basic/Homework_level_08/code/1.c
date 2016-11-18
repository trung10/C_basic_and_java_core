#include <stdio.h>
#define Max 69

int a[Max], n, *p, i;

void nhap2(){
    int i=0;
    printf("\nNhap so phan tu: ");
    scanf("%d",&n);
    while(i<n){
        printf("\nNhap phan tu thu %d: ", i+1);
        scanf("%d",&a[i]);
        i++;
    }
}
void nhap1(){
    p = a;
    printf("\nNhap so phan tu: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
            printf("\nNhap phan tu thu %d: ", i+1);
            scanf("%d",p+i);
    }
}
void show(){
    printf("\n");
    for(i=0;i<n;i++){
    //printf("a[%d] = %d", i, *(p+i));
    printf("a[%d] = %d\t", i, *(a+i));
    }
}
void main(){
    int i;
    while(1){
    printf("\n(^-^)\n1. Nhap mang dung pointer\n2. Nhap mang dung array\n3. Show\n4. Thoat\nChoose: ");
    if(scanf("%d",&i)<=0){
        printf("Nhap mot so nguyen");
        return;
    }else{
            switch(i){
                case 1:
                    nhap1();
                    break;
                case 2:
                    nhap2();
                    break;
                case 3:
                    show();
                    break;
                case 4:
                    return;

                default: printf("Khong co chuc nang nay");

            }
        }
    }
}
