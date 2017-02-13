#include <stdio.h>
int nhap(){
    int n = 0;
    printf("\nEnter an interger: ");
    scanf("%d",&n);
    return n;
}
int min(int a[], int num){
    int min;
    int i = 0;
    min = a[i];
    for(i+1; i<num; i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    return min;
}

int max(int a[], int num){
    int max;
    int i = 0;
    max = a[i];
    for(i+1; i<num; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
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
    printf("Min: %d\nMax: %d", min(a, num), max(a, num));

}
