#include <stdio.h>

void timgiatrichandautien(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            return i;
        }
    }
    return -1;
}


