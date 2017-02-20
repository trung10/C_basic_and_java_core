#include <stdio.h>

void main(){
    int i, j;

    for(i = 1; i <= 10; i++){
        for(j = 1; j <= 10; j ++){
            printf("%3d x %3d = %3d\n", i, j, i*j);
        }
        printf("\n");
    }
}
