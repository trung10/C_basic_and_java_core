## **M?NG**
1. Khái ni?n
	
    * Là m?t t?p h?p nhi?u bi?n có cùng ki?u d? li?u và cùng tên, khi dó m?i ph?n t? c?a m?ng du?c
truy xu?t thông qua ch? s?.

2. Cú pháp

```
<ki?u d? li?u> <tên m?ng> <Danh sách các chi?u c?a m?ng>;
```
>Ví d?: 
>- int array1d[10], array2d[2][6]; <M?ng array1d có 10 ph?n t?, m?ng array2d là m?ng 2 chi?u có 12 ph?n t? d?u thu?c ki?u int>

* Ch? s? c?a m?ng ph?i là m?t giá tr? ki?u int không vu?t qua kích thu?c c?a m?ng, ch? s?
c?a m?ng b?t d?u t? 0.
* Ch? l?y du?c d?a ch? c?a các ph?n t? thu?c m?ng m?t chi?u thông qua toán t? & theo cú
pháp: &tên_bi?n[i] (i là ch? s? c?a m?ng). 
* `Chú ý:` Tên c?a m?ng s? ch?a d?a ch? d?u c?a m?ng,ví d?: có int a[10] thì a=&a[0]

3. Nh?p xu?t
```
#include <stdio.h>
void main(){
int a[5] = {1, 2, 3, 4, 5};
int i =0;
printf("Dãy có: \n")
for(i ; i<5; i++){
printf("a[%d] = %3d\t", i, a[i]);
}
}
```
> K?t qu?:
>
> Dãy có:
> a[1] = 1	a[2] = 2	a[3] = 3	a[4] = 4	a[5] = 5



* Ða chi?u
```
# include <stdio.h>
void main (){
int temp,a[3][3];
int i,j;
/*Nh?p d? li?u */
for (i=0;i<3;i++)
for (j=0;j<3;j++)
{
printf("\na[%d][%d]",i,j);
scanf("%f",&temp); /*Nh?p gián ti?p
thông qua bi?n temp*/
a[i][j]=temp; /*Gán giá tr? c?a temp
cho ph?n t? m?ng*/
}
/*Ðua giá tr? các ph?n t? ra màn hình*/
for (i=0;i<3;i++)
{
printf("\n");
for (j=0;j<3;j++)
printf("%.2f ",a[i][j]);
}
}
```
* Bi?n d?i m?ng 2 chi?u thành m?t chi?u
```
void chuyen21(a[m][n], b[], ){
	int i = 0; j =0;
    for(i; i < m; i++){
    	for(j; j < n; j++){
    	b[i*n + j] = a[i][j];
    	}
    }
}