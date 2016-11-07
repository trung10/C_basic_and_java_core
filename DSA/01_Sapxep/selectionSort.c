/*
Ưu điểm: Thuật toán chạy nhanh hơn khi mảng sắp xếp một phần
Nhược điểm: Hiệu suất không cao
*/
#include <stdio.h>

void main()
{
    int a[10], n, min;
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
        printf("%3d", a[i]);
    }
    //selection sort
    for(i=0; i< n; i++)
    {
        min = i;
        int j = i+1;
        for(j; j < n; j++)
        {
            if(a[min]>a[j])
            {
                min = j;
            }
        }
        //doi cho
        int t;
        t = a[min];
        a[min] = a[i];
        a[i] = t;
    }
    printf("\n_______Selection Sort_______\n");
    for(i = 0; i< n; i++)
    {
        printf("%3d", a[i]);
    }

}
