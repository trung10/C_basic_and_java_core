#include <stdlib.h>
#include <stdio.h>
void main()
{

   int i,n,m;

   printf("Nhap so phan tu cua mang A:");
   scanf("%d",&n);

   int *p = (int *)malloc(n*sizeof(int));

   for(i=0;i<n;i++)
   {
       printf("\nNhap gia tri cua phan tu A[%d]:",i+1);
       scanf("%d",p+i);
   }

   printf("\nNhap so phan tu cua mang B:");
   scanf("%d",&m);
   int *q = (int *)malloc(m*sizeof(int));
   for(i=0;i<m;i++)
   {
       printf("\nNhap gia tri cua phan tu B[%d]:",i+1);
       scanf("%d",q+i);
   }
   sapxep(p,n);
   sapxep(q,m);
   int *z = (int *)malloc((n+m)*sizeof(int));
   printf("\nDay A: ");
   inday(p,n);
   printf("\nDay B: ");
   inday(q,m);
   printf("\nDay C: ");
    tronday(p,n,q,m,z);


}

void sapxep(int *p,int n)
{
    int i,j,khoa,check;

    for(i=0;i<n;i++)
    {
        khoa = *(p+i);

            for(j=0;j<n;j++)
            {
                if(khoa < *(p+j))
                {
                    *(p+i) = *(p+j);
                    *(p+j) = khoa;
                    khoa = *(p+i);
                }
            }

    }
}
void inday(int *p,int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("%d  ",*(p+i));
    }
}
void tronday(int *p,int n,int *q,int m,int *z)
{
    int k,j=0,i=0;

    for(k=0;k<n+m;k++)
    {

        if(*(p+i)>*(q+j))
        {
            *(z+k) = *(q+j);
            j++;
        }else
        {
            *(z+k) = *(p+i);
            i++;
        }
    }


    inday(z,m+n);
}
