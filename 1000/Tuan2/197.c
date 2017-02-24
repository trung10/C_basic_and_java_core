
#include <stdio.h>
#include <math.h>

void lietKeCacSoTrongMangMotChieu(int a[], int n){
    int i;
    for(int = 0; i < n ; i++){
        if(laSoCoChuSoDauLaSoLe(a[i])){
                    printf("%d ", a[i]);
    }
}
}

int laSoCoChuSoDauLaSoLe(int n){
    while(n > 0){
        if(n < 10){
            break;
        }
        n /= 10;
    }
    return (n % 2) ? 1 : 0;

}

