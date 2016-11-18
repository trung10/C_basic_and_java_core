#include <stdio.h>
void main()
{
    int n,i,tong=0, *p;
    printf("Nhap so phan tu cua day: ");
    scanf("%d",&n);
      for(i=0;i<n;i++)
    {
        printf("\nNhap phan tu thu %d: ",i+1);
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        tong += *(p+i);
    }
    printf("\nTong = %d",tong);
}
