#include <stdio.h>

void main(){
    int i = 1;
    for(i; i < 100; i++){
            if(i & 1){
                    if((i == 5) || (i == 7) || (i == 93))
                        continue;
                    printf("%d ", i);

            }
}
}
