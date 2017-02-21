#include <stdio.h>
#include <math.h>

int tongLeNhoHonN(int n){
    if(n < 1)
        return 0;
    return n - 1 + tongLeNhoHonN(n - 1);
}

int main(){
    printf("n = 9, Sn = %d", tongLeNhoHonN(9));
}
