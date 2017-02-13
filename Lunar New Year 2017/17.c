#include <stdio.h>
#include <math.h>

void main(){
    while(1){
        int n;
        printf("\n--------------\nNhap 1 de tinh cv,dt hinh tam giac\nNhap 2 de tinh cv,dt hinh vuong\nNhap 3 de tinh cv,dt hinh chu nhat\nNhap 4 de tinh cv,dt hinh tron\nChon:");
        if(scanf("%d", &n) <= 0)
            printf("Nhap so nguyen tu tu 1 den 4");
        else{
            switch(n){
            case 1:
                tamgiac();
                break;
            case 2:
                hinhvuong();
                break;
            case 3:
                hinhchunhat();
                break;
            case 4:
                hinhtron();
                break;
            }
    }
}
}

void tamgiac()
{
    int a,b,c,cv;
    float dt,p;
    printf("\nNhap 3 canh:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if((a+b)>c && (a+c)>b && (b+c)>a )
    {
        cv = a+b+c;
        p = (float)cv/2;
        dt = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("\nChu vi = %d\nDien tich = %f",cv,dt);
    }
    else printf("\nKhong phai 3 canh cua tam giac.");

}

void hinhchunhat()
{
    int cd,cr,cv,dt;
    printf("\nNhap cd,cr:");
    scanf("%d",&cd);
    scanf("%d",&cr);
    if(cd>cr)
    {
        cv = (cd+cr)*2;
        dt = cd*cr;
        printf("\nChu vi = %d\nDien tich = %d",cv,dt);
    }
    else printf("\nNhap sai.");
}

void hinhvuong()
{
     int a,cv,dt;
    printf("\nNhap canh:");
    scanf("%d",&a);
    cv = a*4;
    dt = a*a;
    printf("\nChu vi = %d\nDien tich = %d",cv,dt);

}

void hinhtron()
{
    float pi =3.14,cv,dt;
    int r;
    printf("\nNhap ban kinh:");
    scanf("%d",&r);
    cv = pi*2*r;
    dt = pi*r*r;
    printf("\nChu vi = %f\nDien tich = %f",cv,dt);
}
