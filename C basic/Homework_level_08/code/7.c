#include <stdlib.h>
#include <stdio.h>

int dinhthuccap2(int *a, int n){
    return (*(a+(n*0)+0))*(*(a+(n*1)+1))-(*(a+(n*1)+0))*(*(a+(n*0)+1));
}
int dinhthuccap3(int *a){
    return ((*a)*(*(a+4))*(*(a+8))+(*(a+1))*(*(a+5))*(*(a+6))+(*(a+7))*(*(a+3))*(*(a+2))-(*(a+6))*(*(a+4))*(*(a+2))-(*(a))*(*(a+7))*(*(a+5))-(*(a+3))*(*(a+1))*(*(a+8)));
}
void main(){
    int *a;
    a = (int *)malloc((2*2)*sizeof(int));
    *(a+0) = 1;
    *(a+1) = 8;
    *(a+2) = 2;
    *(a+3) = 5;
    printf("deta = %d", dinhthuccap2(a,2));
    free(a);
}
