#include <stdio.h>
#include <math.h>

float tim(float a[], int n){
    int i;
    float k = -1;
    for(i = 0; i < n; i++){
        if((a[i] < 0) && (a[i] > -1)){
            k = a[i];
        }
    }
    return k;
}
void main(){
float a[5] = {1, -.25, 2009, 9, -0.9};
printf("%f", tim(a, 5));
}
