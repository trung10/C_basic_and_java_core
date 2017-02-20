#include <stdio.h>
#include <math.h>

void main(){
    int x = 0, y = 0 , z = 0;
    for( x = 0; x * 5000 < 200000; x++){
        for(y = 0; (y * 2000 + x * 5000) < 200000; y++){
            for(z = 0; z < 200; z ++){
                if(200000 == (5000 * x + 2000* y + 1000 *z)){
                printf("%3d %3d %3d\t", x, y, z);
            }
        }
    }
}
}
