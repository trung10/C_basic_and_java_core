#include <stdio.h>
#include <stdlib.h>

void main(){
int *a, i , j, key = 1;
a = (int*)malloc(9*sizeof(int));

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
         = key;
        key++;
    }
}
printf("Ma tran\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%4d",*(a+(5*i)+j));
    }
    printf("\n");
}
}
