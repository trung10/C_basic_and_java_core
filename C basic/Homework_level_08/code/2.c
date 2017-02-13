#include <stdio.h>
int nhap(){
    int n = 0;
    printf("\nEnter an interger: ");
    scanf("%d",&n);
    return n;
}
void swap(int *a, int *b){
    int n;
    n = *a;
    *a = *b;
    *b = n;
}
void selectionSort(int a[], int num){
    int min, i, j;
    for(i=0;i<num-1;i++){
        j = i+1;
        min = i;
        for(j;j<num;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        swap(a+i, a+min);
    }
}
void main(){
    printf("(^_^)\nNhap so vai so(Nhap 0 de ket thuc)");
    int a[69], n=2, num=0;
    while(n!=0){
        n = nhap();
        if(n!=0) {
        a[num] = n;
        num++;
        }
    }
    selectionSort(a, num);
    printf("\n");
    for(n=0;n<num;n++){
    printf("%d ", *(a+n));
    }
}
