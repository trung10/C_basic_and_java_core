#include <stdio.h>


int tong(int n){
    if(n < 1)
        return 0;
    return n*n + tong(n - 1);
}
