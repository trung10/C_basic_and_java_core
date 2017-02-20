#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, j;
    printf("\nNhap gia tri N : ");
    scanf("%d", &n);
    printf("\nCac so chinh phuong nho hon %d la : \n",n);
    for (i=2; i<n; i++)
    {
        if(kiemtraChinhPhuong(i)){
            printf("%3d", i);
        }
    }
}
int kiemtraChinhPhuong(int n){
    if(sqrt(n) - (int) sqrt(n) == 0)
        return 1;
    return 0;
}
