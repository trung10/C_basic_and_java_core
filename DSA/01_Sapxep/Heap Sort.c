/*
Ưu điểm: Hiệu suất của thuật toán cao
Nhược điểm: Code khó
*/
#include<stdio.h>

int cmp(int *a, int *b){return *a-*b;}
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void sift_down(int *A, int parent, int n)
{
    int child = 2 * parent + 1;

    if (child < n) {
        if (child + 1 < n && cmp(A + child, A + child + 1) < 0) {
            child++;
        }

        if (cmp(A + parent, A + child) < 0) {
            swap(A + parent, A + child);
            sift_down(A, child, n);
        }
    }
}
void build_heap(int A[], int n){
        int i;
        for(i=(n/2)-1;i>=0;i--){
                sift_down(A,i,n);
        }
}
void heapsort(int A[], int n){
        int active;
        build_heap(A,n);
        for(active=n-1;active>0;active--){
                swap(A,A+active);
                sift_down(A,0,active);
        }
}
int main(){
        int A[]={13,16,14,10,15,17,18,30,25},i,n;
        n=sizeof(A)/sizeof(A[0]);
        heapsort(A,n);
        for(i=0;i<n;i++){
                printf("%d\t",A[i]);
        }
}
