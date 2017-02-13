#include <stdio.h>

void main()
{
    int n,i;
    float tong=0;
    printf("Nhap so tu nhien: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        tong += (float) 1/((i+1));
    }
    printf("\nKet qua = %f ",tong);
}
