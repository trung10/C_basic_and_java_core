#include <stdio.h>
#include <math.h>

int timUCMN(int a, int b){
    if(a < b)
        return timUCMN(b, a);
    return (a % b) ? timUCMN(a % b, b) : b;
}

int main(){
     printf("UCLN 4 va 9 la %d", timUCMN(6 , 9));
     return 0;
}

