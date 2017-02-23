#include <stdio.h>

int timgiatrilonnhat(float a[], int n){
    int i;
    float ln = a[0];
    for(i = 1; i < n; i++){
        if(ln < a[i]){
            ln = a[i];
        }
    }
    return ln;
}
