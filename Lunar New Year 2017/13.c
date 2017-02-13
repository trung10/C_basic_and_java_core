#include <stdio.h>
#include <malloc.h>

void InMaTranTangDoc(int rong, int cao){
    int *n, i , j, dem = 1;
    n = calloc(rong * cao, sizeof(int));
    for(i = 0; i < rong; i++){
        for(j = 0; j < cao; j++)
                *(n + i + j * rong) = dem++;
    }
    for(i = 0; i < cao; i++){
        for(j = 0; j < rong; j++){
            printf("%d\t", *(n + j + i * rong));
        }
        printf("\n");

    }
}
void main(){
    InMaTranTangDoc(5 , 5);
}
