#include <stdio.h>
#include <math.h>

int is3k(long int n){
    double a = (double) n;
    while(a >= 3){
        a /= 3;
    }
    if(isSoNguyen(a))
        return 1;
    return 0;

}

int isSoNguyen(double n){
    if(n - (int) n)
        return 0;
    return 1;
}
main()
{
    printf("%d", is3k(75242));

}
