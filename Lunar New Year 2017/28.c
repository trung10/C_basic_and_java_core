#include <stdio.h>
#include <malloc.h>
void main()
{
    int *a,n,i,k,dem=0,j;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri cua phan tu a[%d]:",i+1);
        scanf("%d",a+i);
    }
    printf("\nDay da nhap:");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }

    sapxep(a,n);

    for(i=0;i<n;i++)
    {
        if(a[i]<0) dem++;
    }
     a = (int*)realloc(a,(n-dem)*sizeof(int));


    printf("\nDay da sap xep:");
    for(i=n-dem-1;i>=0;i--)
    {
        printf("%d ",*(a+i));
    }
}

void sapxep(int *a,int n)
{
    int i,j,max;
    for(i=0;i<n;i++)
    {
        max = *(a+i);
        for(j=i+1;j<n;j++)
        {
            if(max<*(a+j))
            {
                *(a+i) = *(a+j);
                *(a+j) = max;
                max = *(a+i);
            }
        }
    }
}
