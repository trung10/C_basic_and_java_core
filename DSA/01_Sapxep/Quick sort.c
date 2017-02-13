/*
Ưu điểm: Tuỳ cách chọn pivot(Khóa) mà tốc độ của thuật toán nhanh hay chậm
Nhược điểm: Code khá phức tạp
*/
#include<stdio.h>
#define swap(type, a, b) {type temp = a; a = b; b = temp; }

int i, arr[100], n;

void quickSort(int *a, int l, int t)
{
    if(l < t)
    {
        int i = l+1, j = t;
        do{
            while (i<=j&&(a[i] < a[l]))
            {
                i++;
            }
            while (i<=j&&(a[j] > a[l]))
            {
                j--;
            }
            if(i < j)
            {
                swap(int, a[i], a[j]);
                i++;
                j--;
            }
        }while(i <= j);
        swap(int, a[l], a[j]);
        quickSort(a, l, j-1);
        quickSort(a, j+1, t);
    }
}
int main ()
{
    int i;
    createarraylist();
    printf("\nTruoc khi sap xep: ");
    for (i=0; i<n; i++)
        printf ("%5d", arr[i]);

    quickSort(arr, 0, n-1);

    printf("\nSau khi sap xep:   ");
    for (i=0; i<n; i++)
        printf ("%5d", arr[i]);
}

void createarraylist()
{
    printf("Nhap so nhap tu: ");
    scanf("%d", &n);
    int i;
    for(i = 0; i< n; i++)
    {
        printf("Nhap phan tu %d: ", i+1);
        scanf("%d", &arr[i]);
    }
}
