#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, j;
    printf("\nNhap gia tri N : ");
    scanf("%d", &n);
    printf("\nCac so nguyen to nho hon %d la : \n",n);
    for (i=2; i<n; i++)
    {     for (j=2; j<=i/2; j++)
    if (i%j == 0)        goto tt;
    printf("%d ",i);
    tt:;
    }
}
