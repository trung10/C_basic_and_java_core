#include <stdio.h>
#include <math.h>


int demChuSo(unsigned int n){
    int dem = 0, i = 0;
    while(n > 0){
            dem++;
        n /= 10;
    }
    return dem;
}
int kTDoiXung(unsigned int n){
    int i, m = demChuSo(n), s = n;
    for(i = 1; i <= m/2; i++){
        float a;
        a = pow(10, m - i);
        if((n % 10) != ((int) (s / (int) a) % 10) ){
                return 0;
        }
        n /= 10;
    }
    return 1;
}
void main(){
    printf("\n9889 la doi xung?  %d", kTDoiXung(9889));
}



