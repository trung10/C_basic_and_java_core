#include <stdio.h>

void sapxep(int *a, int n){
    int i, j;
    for(i = 0; i < n - 1; i++){
            for(j = i + 1; j  < n; j++){
                if(a[i] > a[j]){
                    swap(a + i, a + j);
                }
        }
}
}

void main(){
    int a[5] = {1, 5, 7, 3, 7}, i;
    sapxep(a, 5);
    for(i = 0; i< 5; i++){
        printf("%d ", *( a + i));
    }
}

void swap(int *a, int*b){
    int c = *a;
    *a = *b;
    *b = c;
}



