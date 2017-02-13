#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void InMaTranTangXoanOc(int rong, int cao){
    int *p, i, j, dem = 1, chay1 = 0, chay2 = rong - 1, n = rong;
    //n = (int *)calloc(rong * cao, sizeof(int));
    p=(int*)malloc((n*n)*sizeof(int));
    while(dem<=n*n)
{
    for(i=chay1;i<=chay2;i++)
    {
        *(p+(chay1*n)+i)=dem++;
    }
    for(i=chay1+1;i<=chay2;i++)
    {
        *(p+(i*n)+chay2)=dem++;
    }
    for(i=chay2-1;i>=chay1;i--)
    {
        *(p+(chay2*n)+i)=dem++;
    }
    for(i=chay2-1;i>=chay1+1;i--)
    {
        *(p+(n*i)+chay1)=dem++;
    }
    chay1++;
    chay2--;
}
    /*while(dem <= rong * cao){

        for(i = chan1; i <= chan2; i++)
            *(n + chan1*rong + i) = dem++;
        for(i = chan1 + 1; i <= chan2; i++)
            *(n + i*rong + chan2) = dem++;
        for(i = chan2 - 1; i >= chan1; i--)
            *(n + rong*chan2 + i) = dem++;
        for(i = chan2 - 1; i <= chan1 + 1; i--)
            *(n + rong*i + chan1) = dem++;
        chan1 ++;
        chan2 --;
    }*/
    for(i = 0; i < cao; i++){
        for(j = 0; j < rong; j++){
            printf("%d\t", *(p + j + i * rong));
        }
        printf("\n");

    }
}
void main(){
    InMaTranTangXoanOc(3 , 3);
}
