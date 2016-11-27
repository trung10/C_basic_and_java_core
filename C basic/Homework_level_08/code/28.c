#include <stdio.h>
#include <stdlib.h>

void main(){
int *a, i , j, key = 1;
a = malloc(25*sizeof(int));

for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        *(a+(5*j)+i) = key;
        key++;
    }
}
printf("Ma tran\n");
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        printf("%4d",*(a+(5*i)+j));
    }
    printf("\n");
}
}
