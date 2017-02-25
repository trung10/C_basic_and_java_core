
#include <stdio.h>
#include <math.h>

int timSo(int a[], int n){
    int i, s = uocChungLonNhat( (int) fabs(a[0]), (int)fabs(a[1]));
    for(i = 2; i< n; i++){
        s = uocChungLonNhat(l, (int) fabs(a[i]));
    }
    return s;

}
int uocChungLonNhat(int a, int b){
    if(a < b){
        return uocChungLonNhat(b, a);
    }
    return (a % b) ? uocChungLonNhat(a % b, b) : b;
}
void main(){
    int a[5] = {2, 6, 2, 7, 3};
    printf("%d", timSo(a, 5));
}
