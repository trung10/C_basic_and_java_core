#include <stdio.h>
#include <math.h>

int sNmu3(int n){
    if(n < 1)
        return 0;
    return pow(n, 3) + sNmu3(n - 1);
}

int main(){
    printf("n = 3, Sn = %d", sNmu3(3));
}
