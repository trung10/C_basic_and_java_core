#include <stdio.h>
#include <math.h>

float timTuyetDoiLonNhat(float a[], int n){
    int i;
    float k = fabs(a[0]);
    for(i = 1; i < n; i++){
        if(k < fabs(a[i]))
           k = fabs(a[i]);
    }
    return k;
}

void timDoan(float a[], int n){
    int b = (int) timTuyetDoiLonNhat(a, n);
    printf("[%d, %d]", - b -1 , b + 1);

}
void main(){
float a[5] = {1, 6, 5, 9, 2.3};
timDoan(a, 5);
}



