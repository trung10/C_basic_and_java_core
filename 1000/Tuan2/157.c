#include <stdio.h>
#include <math.h>

float timNN(float a[], int n){
    int i;
    float k = a[0];
    for(i = 1; i < n; i++){
        if(k > a[i]){
            k = a[i];
        }
    }
    return k;
}

float timLN(float a[], int n){
    int i;
    float k = a[0];
    for(i = 1; i < n; i++){
        if(k < a[i]){
            k = a[i];
        }
    }
    return k;
}

void timDoan(float a[], int n){
    int b1 = (int) timNN(a, n) - 1;
    int b2 = (int) timLN(a, n) + 1;

    printf("[%d, %d]", b1, b2);

}
void main(){
float a[5] = {1, 6, 5, 9, 2.3};
timDoan(a, 5);
}


