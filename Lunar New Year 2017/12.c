#include <stdio.h>
#include <malloc.h>

void InMaTranTang(int rong, int cao){
    int *n, i , j;
    n = calloc(rong * cao, sizeof(int));
    for(i = 0; i < rong * cao; i++)
        *(n + i) = (i + 1);
    for(i = 0; i < cao; i++){
        for(j = 0; j < rong; j++){
            printf("%d\t", *(n + j + i * rong));
        }
        printf("\n");

    }
}
void main(){
    InMaTranTang(5 , 5);
}
