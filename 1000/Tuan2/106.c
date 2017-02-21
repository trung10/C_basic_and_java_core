#include <stdio.h>
enum docChuSo{
    mot = 1,
    hai = 2,
    ba = 3,
    bon = 4,
    nam = 5,
    sau = 6,
    bay = 7,
    tam = 8,
    chin = 9,
};
int dao2So(unsigned int n){
    int a;
    if(n > 1000)
        return 0;
    a = n % 10;
    n /= 10;
    while(n > 0){
        a *= 10;
        a += (n % 10);
        n /= 10;
    }
    return a;
}
void docSo(unsigned int n){
    if(n > 999)
        return;
    while(n > 0){
        switch(n % 10){
        case 1:
            printf("mot ");
            break;
        case 2:
            printf("hai ");
            break;
        case 3:
            printf("ba ");
            break;
        case 4:
            printf("bon ");
            break;
        case 5:
            printf("nam" );
            break;
        case 6:
            printf("sau ");
            break;
        case 7:
            printf("bay ");
            break;
        case 8:
            printf("tam ");
            break;
        case 9:
            printf("chin ");
            break;
        }
        n /= 10;

    }
}
void main(){
    docSo(dao2So(122));
}
