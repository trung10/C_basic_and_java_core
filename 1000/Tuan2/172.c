

#include <stdio.h>
#include <math.h>

int timSo(int a[], int n){
    int i, s = BuoiChungNhoNhat( (int) fabs(a[0]), (int)fabs(a[1]));
    for(i = 2; i< n; i++){
        s = BuoiChungNhoNhat(l, (int) fabs(a[i]));
    }
    return s;

}
int BuoiChungNhoNhat(int a, int b){
    if(a < b){
        return uocChungLonNhat(b, a);
    }
    int n = a;
    while(n % b){
        n += a;
    }
    return n;
}
void main(){
    int a[5] = {2, 6, 2, 7, 3};
    printf("%d", timSo(a, 5));
}
