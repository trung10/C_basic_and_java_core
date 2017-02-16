#include<conio.h>
#include<stdio.h>

main()
{
    float a,b,c,d;
    printf("nhap vao 3 so a,b,c!!!");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
        if(b==0)
            {
                if(c==0)
                    printf("phuong trinh da cho co vo so nghiem");
                else
                    printf("phuong trinh da cho vo nghiem");
            }
        else
            printf("phuong trinh da cho co nghiem la %f",-c/b);
    }
    else
    {
        d=b*b-4*a*c;
        if (d<0)
            printf("phuong trinh da cho vo nghiem!!!");
        else if (d=0)
            printf("phuong trinh da cho co nghiem kep la %f",-b/(2*a));
        else
            printf("phuong trinh da cho co 2 nghiem la %f,%f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
    }
getch();
}
