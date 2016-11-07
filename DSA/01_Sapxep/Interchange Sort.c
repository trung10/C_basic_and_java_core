/*
- Ưu điểm: Dể hiểu dể code
- Nhước điểm: hiệu suất không cao
*/
#include <stdio.h>

void main()
{
    int a[100], n;
    printf("Nhap so nhap tu: ");
    scanf("%d", &n);
    int i;
    for(i = 0; i< n; i++)
    {
        printf("Nhap phan tu %d: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("\n");
    for(i = 0; i< n; i++)
    {
        printf("%5d", a[i]);
    }
    //interchange sort
    for(i=0; i<n-1; i++)
    {
        int j = i+1;
        for(j;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int t;
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("\n______interchange sort______\n");
    for(i = 0; i< n; i++)
    {
        printf("%5d", a[i]);
    }
}
