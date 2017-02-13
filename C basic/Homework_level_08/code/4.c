#include <stdio.h>
#define F Finonacci
int Finonacci(n){
    if(n==1){
        return 1;
    }else if(n==2){
        return 1;
    }
    return (Finonacci(n-1)+Finonacci(n-2));
}
void main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    int i = 1;
    for(i;i<=n;i++){
        printf("%d  ", F(i));
    }
}
