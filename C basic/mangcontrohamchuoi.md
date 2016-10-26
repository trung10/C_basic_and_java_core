## **CON TRỎ  VÀ MẢNG VÀ HÀM VÀ CHUỖI**

### MỤC LỤC

[1. HÀM VÀ CON TRỎ](#1)

- [1.1 Hàm có đối con trỏ](#11)
- [1.2 khi nào sử  dụng đối con trỏ ](#12)

[2. MẢNG VÀ CON TRỎ](#2)

- [2.1 Con trỏ và mảng 1 chiều](#21)
- [2.2 Con trỏ và mảng 2 chiều](#22)

[3. HÀM VÀ MẢNG](#3)

- [3.1 Hàm và mảng một chiều](#31)
- [3.2 Hàm và mảng 2 chiều](#32)

[4. Con trỏ và chuỗi](#4)

- [4.1 Khai báo](#41)
- [4.2 Hàm và chuỗi ký tự](#42)

[5. Mảng và chuỗi ký tự](#5)

- [5.1 Mảng các con trỏ](#51)
- [5.2 Con trỏ chỉ đến con trỏ](#52)

---

<a name="1"></a>
### 1. HÀM VÀ CON TRỎ

<a name="11"></a>
##### 1.1 Hàm có đối con trỏ (tham chiếu)

	Nếu đối của hàm là con trỏ kiểu int (float, double,...) thì tham số thức thức tương ứng phải là địa chỉ của biến kiểu int (float, double,...). Khi đó địa chỉ của biến được truyền cho đối con trỏ tương ứng. Do đã biết địa chỉ của biến, nên ta có thể gán cho nó một giá trị mới bằng cánh sử  dụng các câu lệnh thích hợp trong thân hàm.
	
<a name="12"></a>
##### 1.2 khi nào sử  dụng đối con trỏ  

	`Khi muốn bảo lưu lại kết quả tính toán được của các đối số  trong hàm` để sử dụng cho chương trình gọi hàm có đối số thì chúng ta phải khai báo đối  số của hàm là tham chiếu (con trỏ hay dạng địa chỉ).
	
	Ví dụ:
	
	````
	# include <stdio.h>
	#include <conio.h>
	int a,b;
	void swap(int *a, int *b);
	void main () /* Ham chinh */
	{
	a=3; b=7;
	printf("
	\
	n Truoc khi goi ham: ")
	printf("A= %d ",a);
	printf("B= %d ",b);
	swap(&a,&b);
	/*Khi tham số hình thức là con trỏ thì 
	tham số thực phải là con trỏ (dạng địa chỉ) */
	printf("Sau khi 
	goi ham: A = %d B= %d 
	\
	n",a,b);
	getch();
	}
	/*
	a,b là hai tham số vừa vào vừa ra, và sử dụng kiểu 
	con trỏ
	*/
	void swap(int *a, int *b)
	{
	int temp ;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("
	\
	nTrong ham swap A= %d B= %d 
	\
	n",*a,*b);
	}
	````

<a name="2"></a>
### 2. MẢNG VÀ CON TRỎ

<a name="21"></a>
##### 2.1 Con trỏ và mảng 1 chiều

	Con trỏ p và p trỏ vào phần tử thứ k của mảng a thì p+i sẽ
	trỏ đến phần tử  thứ k+i của mảng a.
	```
	#include <stdio.h>
	void main()
	{
	int a[3]={10,20,30};
	int *ptr;
	ptr = a;
	printf("Noi dung cua a[0] => %d\n",*ptr);
	printf("Noi dung cua a[1] => %d\n",*(ptr + 1));
	printf("Noi dung cua a[2] => %d\n",*(ptr + 2));
	}
	```

<a name="22"></a>	
##### 2.2 Con trỏ và mảng 2 chiều

	Việc xử lý mảng nhiều chiều phức tạp hơn so với mảng một 	chiều. Không phải mọi qui tắc đúng đối với mảng một 
	chiều 
	đều có thể đem ra áp dụng đối với mảng nhiều chiều. Phép 	toán lấy địa chỉ nói chung không dùng được đối với các 		thành phần của mảng nhiều chiều (trừ trường hợp mảng hai 	chiều các số nguyên). Xét chương trình sau với ý định 
	nhập 		
	số liệu cho ma trận thực.
	
	```
	#include <stdio.h>
	void main()
	{
	float a[10][20];
	int i,j,n;
	printf("Nhap vao kich thuoc ma tran n=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		{
		printf("a[%d][%d] = ",i,j);
		scanf("%f",(float *)a+i*20+j);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		{
		printf("a[%d][%d] = %f",i,j,a[i][j]);
		}
		printf("\n");
	}
	}
	```
	Để ý rằng, a là một hằng con trỏ trỏ đến các dòng của một 	ma trân hai chiều, vì vậy a trỏ đến dòng thứ nhất a+1 trỏ 
	đến dòng thứ hai a+2 trỏ đến dòng thứ ba.v.v. Ðể tính
	toán 
	được địa chỉ của phần tử ở dòng i cột j chúng ta phải dùng 
	phép chuyển đổi kiểu bắt buộc đối với a: (float * )a, 		đây là con trỏ trỏ đến thành phần a[0][0] của ma trận. Và 	vì vậy thành phần a[i][j] sẽ có địa chỉ là (float *a)
	+i*+j. Một cách tổng quát, nếu mảng có kiểu type và có 		kích thước các chiều tương ứng là n1,n2,..,nk (Giả sử
	mảng 
	a có k chiều). Ðịa chỉ của thành phần a[0]..[0] (k chỉ số 0)
	là (type *)a, và địa chỉ của a[i1][i2]...[ik] được tính
	như sau *(a + n*i + k).


<a name="3"></a>
### 3. HÀM VÀ MẢNG

<a name="31"></a>
##### 3.1 Hàm và mảng một chiều

	Nếu tham số thực là tên mảng a (một chiều) kiểu in
	(float, double,...) thì đối pa tương ứng cần phải là môt 
	con trỏ kiểu int (float, double,...). Ðối pa có thể 
	khaibáo theo hai cách:
	```
	//Kiểu con trỏ
	int *pa;
	float *pa;
	double *pa;
	//kiu mảng hình thức
	int pa[];
	float pa[];
	double pa[];
	```
	Ví dụ:
	```
		#include <stdio.h>
	/*Dưới
	đây sẽ 
	khai báo hàm và
	đối của hàm */
	*/
	void ham1(int pa[]);
	void ham2(int *pa);
	void ham3(int pa[]);
	void ham4(int *pa);
	void main()
	{
	int a [3]={10,20,30};
	printf ("
	\
	n Ket qua thuc hien ham 1:
	\
	n");
	ham1(a);
	/*Gọi ham1*/
	printf ("
	\
	n Ket qua thuc hien ham 2:
	\
	n");
	ham2(a);
	/*Gọi ham2*/
	printf ("
	\
	n Ket qua thuc hien ham 3:
	\
	n");
	ham3(a);
	/*Gọi ham3*/
	printf ("
	\
	n Ket qua thuc hien ham 4:
	\
	n");
	ham4(a);
	/*Gọi ham4*/
	}
	void ham1(int pa[])
	{
	printf("Noi dung cua a[0] => %d
	\
	n",pa[0]);
	printf("Noi dung cua a[1] => 
	%d
	\
	n",pa[1]);
	printf("Noi dung cua a[2] => %d
	\
	n",pa[2]);
	}
	void ham2(int *pa)
	{
	printf("Noi dung cua a[0] => %d
	\
	n",pa[0]);
	printf("Noi dung cua a[1] => %d
	\
	n",pa[1]);
	printf("Noi dung cua a[2] => %d
	\
	n",pa[2]);
	}
	void ham3(int pa[])
	{
	printf("Noi dung cua a[
	0] => %d
	\
	n",*(pa));
	printf("Noi dung cua a[1] => %d
	\
	n",*(pa+1));
	printf("Noi dung cua a[2] => %d
	\
	n",*(pa+2));
	}
	void ham4(int *pa)
	{
	printf("Noi dung cua a[0] => %d
	\
	n",* (pa));
	printf("Noi dung cua a[1] => %d
	\
	n", *(pa+1));
	printf("Noi dung cua a[2] => %d
	\
	n
	", *(pa+2));
	}
	```
	Bôn hàm trên đều cho ra kêt quả như nhau.


<a name="32"></a>
##### 3.2 Hàm và mảng 2 chiều

	Giả sử a là mảng hai chiều:
	float a[50][30];
	Làm thế nào để có thể dùng tên mảng hai chiều a trong lời
	gọi hàm.
	Có hai cách:
	* Cánh 1:
	Dùng
	đối con trỏ kiểu float, khai báo theo một trong hai mẫu
	sau:
	float (*pa)[30];
		float pa[][30];
	Ðể truy nhập đến phần tử a[i][j] trong thân hàm, dùng:
	pa[i][j] /*Với cách này hạn chế số cột của mảng hai
	chiều*/
	* Cánh 2:
	Dùng hai
	đối:
	float *pa; /* biểu thị
	địa chỉ đầu của mảng a*/
	int N; /*biểu thị số cột của mảng a*/
	Ðể truy nhập
	đến phần tử
	a[i][j]
	t
	rong thân hàm, dùng công thức:
	*(pa+ i*N + j)
	Theo cách này mảng hai chiều
	được qui về như mảng một chiều. Việc xử lý
	phức 
	tạp hơn so với cách nhưng không hạn chế số cột nên có thể
	dùng cho bất kỳ mảng 
	hai chiều nào.
	Ví dụ:
	```
	#include <stdio.h>
	int cong_cot(int pa[][3]);
	/*Khai báo hàm và
	đối của hàm */
	void main()
	{
		static int a[2][3] = { {10,20,30}, {11,21,31} };
		int hang;
		int cot;
		int tong_cot_dau;
		for(hang = 0; hang< 2; hang++)
		{
			for(cot = 0; cot < 3; cot++)
			{
				printf("%5d", a[hang][cot]);
			}
			printf("\n");
		}
		tong_cot_dau = cong_cot(a);
		/*Gọi hàm*/
		printf("Tong cua cot dau tien la %d", tong_cot_dau);
		}
	int cong_cot(int pa[][3])
	{
		int hang;
		int tong_cot;
		tong_cot = 0;
		for(hang =
		0; hang < 2; hang++)
		tong_cot += pa[hang][0];
		return(tong_cot);
	}
	```

<a name="4"></a>
### 4. Con trỏ và chuỗi

<a name="41"></a>
##### 4.1 Khai báo

	Trong một chương trình nếu chúng ta có sử dụng chuỗi ký tự, thì máy sẽ cung cấp một vùng nhớ cho một mảng kiểu char
	đủ lớn để lưu các ký tự của chuỗi ký tự này và ký tự \0 ở cuối. Khi
	đó bản thân chuỗi ký tự này là một hằng địa chỉ. Nó chứa địa chỉ đầu của mảng lưu trữ nó.
	Ví dụ:
	
	```
	#include <stdio.h>
	char string[] = "Hello";
	void main()
	{
		char *ptr;
		ptr = string;
		printf("Xau ki tu la %s.\n",string);
		printf("Cac ki tu se la:\n");
		printf("%c\n",*ptr);
		printf("%c\n",*(ptr + 1));
		printf("%c\n",*(ptr + 2));
		printf("%c\n",*(ptr + 3));
		printf("%c\n",*(ptr + 4));
		printf("%c\n",*(ptr + 5));
	}
	```
	
<a name=42></a>
##### 4.2 Hàm và chuỗi ký tự

	Nếu tham số thực là tên chuỗi ký tự chuoi[20], đối ten_chuoi của hàm được khai báo theo hai mẫu:
	`char ten_chuoi[] hoặc char *ten_chuoi`
	
	Ví dụ:
	
	```
	#include <stdio.h>
	void ham(char ten_chuoi[]);
	/*Khai báo hàm và
	đối của 
	hàm */
	void main()
	{
		char chuoi[20];
		printf("Ten em la gi? => ");
		gets(chuoi);
		ham(chuoi);
		/*Gọi hàm*/
	}
	void ham(char ten_chuoi[])
	{
		printf("%s yeu dau cua long toi!",ten_chuoi);
	}
	```
	
<a name=5></a>
### 5. Mảng và chuỗi ký tự

<a name=51></a>
##### 5.1 Mảng các con trỏ
	Khai báo mảng con trỏ
	```
	type *pointer_array[size];
	```
	ví dụ:
	
	```
	#include <stdio.h>
	#include <string.h>/*Khai bao cac ham thao tac tren xau*/
	#include <alloc.h> /*Khai bao cac ham cap phat bo nho dong*/
	#define MAXLINES 100 /*Toi da co 100 ten*/
	#define MAXLEN 20 /*Ten dai toi da 20 ky tu*/
	void main()
	{
	char *st
	rlist[MAXLINES];
	char name[MAXLEN],*p;
	int nlines=0;/*Ban dau chua co ten nhap vao*/
	int i,j,len;
	printf("CHUONG TRINH SAP XEP DANH SACH TEN\n");
	/*Doc vao cac ten*/
	while(nlines <MAXLINES)
	{
		printf("hay nhap ten thu %d:",nlines+1);
		gets(name);
		if ((len=strlen(name))==0) break;
		if ((p=(char *)malloc(len+1))==NULL) /*Ham alloc
		cap cho
		p vung nho len + 1 byte*/
		break; /*Khong du bo nho de cap phat*/
		strcpy(p,name);
		strlist[nlines++]=p;
	}
	if (nlines ==0)
	{
		printf("Khong doc duoc ten nhap vao");
	}else
	{
	/*Sap xep cac ten nhap vao*/
	for(i=0;i<nlines-1;i++)
	{
	for(j=i+1;j<nlines;j++)
	if(strcmp(strlist[i],strlist[j])>0)
	{
	p=strlist[i];
	strlist[i]=strlist[j];
	strlist[j]=p;
	}
	}
	/*In danh sach len man hinh*/
	for(i=0;i<nlines;i++)
	printf("%d -%s\n",i+1,strlines[i]);
	/*Giai phong vung nho da cap phat*/
	for(i=0;i<nlines;i++)
	free(strlist[i]); /*Ham nay giai phong vung bo nho da
	cap 
	phat cho strlist[i]*/
	}
	}
	```

<a name=52></a>
##### 5.2 Con trỏ chỉ đến con trỏ
	Khai bao: `type **ptr_ptr;`
	
	Ví dụ:
	
	```
	char *monthname[20] =
	{
	"January","February","March","April",
	"May","June","July","August","September",
	"October","November","December"
	};
	char **pp;
	pp=monthname; /*Tên mảng là địa chỉ của phần tử đầu tiên*/
	
