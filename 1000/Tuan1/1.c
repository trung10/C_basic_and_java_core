#include <stdio.h>

int tongSn(n){
    if(n < 1)
        return 0;
    return n + tongSn(n - 1);
}
