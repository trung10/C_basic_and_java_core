#include <stdio.h>
#include <math.h>

int main(){
    int i;
    for(i = 1; i < 100; i++){
        if(i & 1){
            printf("%d ", i);
        }
    }
     return 0;
}

