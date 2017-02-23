#include <stdio.h>
#include <math.h>

float tim(float a[], int n, int x, int y){
    int i;
    float k = -1;
    for(i = 0; i < n; i++){
        if((a[i] <= y) && (a[i] >= x)){
            k = a[i];
            break;
        }
    }
    return k;
}
void main(){
float a[5] = {1, -.25, 2009, 9, -0.9};
printf("%f", tim(a, 5, 1, 9));
}

