#include <stdio.h>
#include <stdlib.h>
int nhap(){
    int a;
    printf("Enter an integer > 1: ");
    scanf("%d",&a);
    return a;
}
void show(int *p, int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%3d",*(p+(n*i)+j));
        }
        printf("\n");
    }
}
void main(){
    int i, j=0, *a, key=1, n, x, y;
    n = nhap();
    x = n-1; y = n-1;
    a = (int*)malloc((n*n)*sizeof(int));
    while(j<=n/2){
        for(i=j;i<=x;i++)
            *(a+(n*j)+i) = key++;
        for(i=j+1;i<=y;i++)
            *(a+(n*i)+x) = key++;
        for(i=x-1;j<=i;i--){
            *(a+(n*y)+i) = key++;
        }
        for(i=y-1;i>j;i--){
            *(a+(n*i)+j) = key++;
        }
        j++;
        x--;
        y--;
    }
    show(a, n);
}
