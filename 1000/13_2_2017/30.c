#include <stdio.h>
void main()
{
    int n,i,s=0;
    printf("Nhap n:");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0) s+=i;
    }
    if(s==n)
        printf("\n%d la so hoan thien!",n);
    else printf("\n%d khong phai la so hoan thien!",n);
}
