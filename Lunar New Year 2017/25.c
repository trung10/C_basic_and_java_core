#include <stdio.h>
void main()
{
    int a[50],duong[50],am[50];
    int n,i,x=0,y=0;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nDay da nhap:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            duong[x] = a[i];
            x++;
        }
        else
            {
                am[y] = a[i];
                y++;
            }
    }
    printf("\nDay duong:");
    if(x==0)printf(" Khong co phan tu duong nao!");
    else
        {
          sapxep(duong,x);
            inday(duong,x);
        }

     printf("\nDay am:");
    if(y==0)printf(" Khong co phan tu am nao!");
    else
    {
        sapxep(am,y);
        inday(am,y);
    }

}

void sapxep(int a[],int n)
{
    int min,i,j,k;

    for(i=0;i<n;i++)
    {
        min = a[i];
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                a[i] =a[j];
                a[j] = min;
                min = a[i];
            }
        }
    }

}

void inday(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}
