#include <stdio.h>

void lietcacgiatriam(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        if(0 < a[i]){
            printf("%d", *(a +i));
        }
    }
}
