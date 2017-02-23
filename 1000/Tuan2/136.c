#include <stdio.h>

void timgiatrichancuoicung(int a[], int n){
    int i;
    for(i = n - 1; i >= 0; i--){
        if(a[i] % 2 == 0){
            return i;
        }
    }
    return -1;
}

