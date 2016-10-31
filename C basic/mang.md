## **MẢNG**

### Mục lục

[1. Khái niện](#1)

[2. Cú pháp](#2)

[3. Nhập xuất](#3)

<a name="1"></a>
###1. Khái niện
	
    * Là một tập hợp nhiều biến có cùng kiểu dữ liệu và cùng tên, khi đó mỗi phần tử của mảng được
truy xuất thông qua chỉ số.

<a name="2"></a>
###2. Cú pháp

```
<kiểu dữ liệu> <tên mảng> <Danh sách các chiều của mảng>;
```

>Ví dụ: 
>- int array1d[10], array2d[2][6]; <Mảng array1d có 10 phần tử, mảng array2d là mảng 2 chiều có 12 phần tử đều thuộc kiểu int>

* Chỉ số của mảng phải là một giá trị kiểu int không vượt qua kích thước của mảng, chỉ số
của mảng bắt đầu từ 0.
* Chỉ lấy được địa chỉ của các phần tử thuộc mảng một chiều thông qua toán tử & theo cú
pháp: &tên_biến[i] (i là chỉ số của mảng). 
* `Chú ý:` Tên của mảng sẽ chứa địa chỉ đầu của mảng,ví dụ: có int a[10] thì a=&a[0]

<a name="3"></a>
###3. Nhập xuất

* Một chiều

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
> Kết quả:
>
> Dãy có:
> a[1] = 1	a[2] = 2	a[3] = 3	a[4] = 4	a[5] = 5



* Đa chiều

```
# include <stdio.h>
void main (){
int temp,a[3][3];
int i,j;
/*Nhập dữ liệu */
for (i=0;i<3;i++)
for (j=0;j<3;j++)
{
printf("\na[%d][%d]",i,j);
scanf("%f",&temp); /*Nhập gián tiếp
thông qua biến temp*/
a[i][j]=temp; /*Gán giá trị của temp
cho phần tử mảng*/
}
/*Ðưa giá trị các phần tử ra màn hình*/
for (i=0;i<3;i++)
{
printf("\n");
for (j=0;j<3;j++)
printf("%.2f ",a[i][j]);
}
}
```
* Biến đổi mảng 2 chiều thành một chiều
```
void chuyen21(a[m][n], b[], ){
	int i = 0; j =0;
    for(i; i < m; i++){
    	for(j; j < n; j++){
    	b[i*n + j] = a[i][j];
    	}
    }
}
