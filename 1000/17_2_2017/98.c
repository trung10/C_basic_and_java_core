#include <stdio.h>
#include <math.h>

void main(){
    int a, b, c, e, f, d;
    float x, y;
    printf("aX + bY = c, dX + eY = f, Nhap: ");
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);

    y = (float) (f * a + c)/ (b + a * e);
    x = (float) (b*y - c)/a;

    printf("Nghiem x = %0.3f, y = %0.3f", x, y);

}
