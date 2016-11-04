### **FILE**

### Mục lục

[1.  Khai báo dữ liệu](#1)

- [1.1 Phân loại hàm thao tác trên tập tin](#11)
- [1.2 Cách khai báo tập tin](#12)

[2. Các kiểu nhập xuất](#2)

- [2.1 Khai báo](#21)
- [2.2 Nhập xuất kiểu văn bản](#22)
- [2.3 Các điểm lưu ý](#23)
- [2.4 Ví dụ](#24)

[3. Các thao tác trên tệp](#3)

[4. Nhập xuất](#4)
- [4.1 Nhập xuất ký tự](#41)
- [4.2 Nhập xuất chuỗi](#42)
- [4.3 Ðọc ghi dữ liệu theo khuôn dạng](#43)
- [4.4 Ðọc ghi số nguyên](#44)
- [4.5 Nhập xuất chuỗi](#45)

[5. Các hàm dành cho con trỏ và tệp tin](#5)

[6. Các hàm quản lý thư mục](#6)

---

<a name="1"></a>
### 1.  Khai báo dữ liệu

<a name="11"></a>
##### 1.1 Phân loại hàm thao tác trên tập tin

Dữ liệu có tập tin có tên là FILE.

- Hàm cấp 1
Là những hàm cấp thấp làm việc với tập tin thông qua một số hiệu tập tin (file 
handle).

- Hàm cấp 2

Là những hàm được xây dựng từ những hàm cấp 1, dễ sử  dụng hơn. Có các hàm phục vụ cho việc đọc ghi trên từng loại dữ liệu (số, chuỗi, ký tự, cấu trúc...). Các hàm cấp 2 làm việc với tập tin thông qua một con trỏ tập tin. Con trỏ này được xác định khi ta mở tập tin. Do đó để dùng các hàm cấp hai ta phải khai báo biến con trỏ tập tin.

<a name="12"></a>
##### 1.2 Cách khai báo tập tin

```
FILE *f;
.....
f=fopen("data.dat","wt");
```

<a name="2"></a>
### 2. Các kiểu nhập xuất

<a name="21"></a>
##### 2.1 Nhập xuất kiểu nhị phân

Dữ liệu ghi lên tập tin không bị thay đổi và khi ta đóng tập tin thì mã kết thúc tập tin sẽ được ghi lên đĩa là -1.

<a name="22"></a>
##### 2.2 Nhập xuất kiểu văn bản

- Chỉ khác kiểu nhập xuất nhị phân khi xử lý ký tự xuống dòng và khi ta đóng tập tin thì mã kết thúc tập tin sẽ được ghi lên đĩa là 26.
- Khi ghi một ký tự chuyển dòng lên đĩa (mã 10) sẽ ghi thành 2 ký tự mã 13 và mã 10.
- Khi đọc nếu gặp hai ký tự liên tiếp là mã 10 và mã 13 sẽ gom lại thành một ký tự là mã 10.

<a name="23"></a>
##### 2.3 Các điểm lưu ý

- Tập tin khi ghi lên đĩa dưới dạng nào thì phải đọc dưới dạng đó. Nếu không việc xử lý sẽ không chính xác.
- Trong C có hàm dùng để nhập xuất cho cả hai kiểu, có hàm chỉ dùng để nhập xuất cho một kiểu nào đó.

<a name="24"></a>
##### 2.4 Ví dụ

```
#include <stdio.h>
void main()
{
	FILE *f;
	char c,c1;
	f=fopen("sl","wt");
	fprintf(f,"%c%c%c%c%c%c",65,66,67,68,10,26);
	fclose(f);
	//f=fopen("sl","rb"); 
	f=fopen("sl","rt");
	while (!feof(f))
	{
		c=getc(f);
		printf("%d ",c);
	}
	fclose(f);
}
````

<a name="3"></a>
### 3. Các thao tác trên tệp

- FILE *fopen(const char *tên_tập_tin,const char *kiểu)

|   Kiểu	|   Mô tả 	|
|---		|---		|
|   "r" "rt"	|   	Mở tập tin để đọc theo kiểu văn bản. Tập tin phải có trên đĩa 			nếu không sẽ có lỗi.		|
|  "w" "wt" 	| Mở tập tin để ghi theo kiểu văn bản. Nếu tập tin đã có trên đĩa sẽ bị xóa.  	|
|  "a" "at" 	|   	Mở tập tin để ghi bổ sung theo kiểu văn bản. Nếu tập tin chưa có thì tạo mới. |
|  "r+" "r+t" 	|   	Mở tập tin để đọc/ghi theo kiểu văn bản. Tập tin phải có trên đĩa nếu không sẽ có lỗi.|
|  "w+" "w+t" 	|   	Mở tập tin để đọc/ghi theo kiểu văn bản. Nếu tập tin đã có trên đĩa sẽ bị xóa.|
|  "a+" "a+t" 	|   	Mở tập tin để đọc/ghi bổ sung theo kiểu văn bản. Nếu tập tin chưa có thì tạo mới.|
|  "rb" 	|   	Mở tập tin để đọc theo kiểu nhị phân. Tập tin phải có trên đĩa nếu không sẽ có lỗi.|
|  "wb" 	|   	Mở tập tin để ghi theo kiểu nhị phân. Nếu tập tin đã có trên đĩa sẽ bị xóa.|
|  "ab" 	|   	Mở tập tin để ghi bổ sung theo kiểu nhị phân. Nếu tập tin chưa có thì tạo mới.|
|  "r+b" 	|   	Mở tập tin để đọc/ghi theo kiểu nhị phân. Tập tin phải có trên đĩa nếu không sẽ có lỗi.|
|  "w+b" 	|   	Mở tập tin để đọc/ghi theo kiểu nhị phân. Nếu tập tin đã có trên đĩa sẽ bị xóa.|
|  "a+b" 	|   	Mở tập tin để đọc/ghi bổ sung theo kiểu nhị phân. Nếu tập tin chưa có thì tạo mới.|

-  fclose(FILE *f)
- int fcloseall(void)
Ðóng tất cả các tập tin đang mở

-  int fflush(FILE *f)
- int flushalll(void)
- int unlink(const char *tên_tập_tin)
- int rename(const char *tên_cũ,const char *tên_mới)
- int feof(FILE *f)

<a name="4"></a>
### 4. Nhập xuất

<a name="41"></a>
##### 4.1 Nhập xuất ký tự
```
//Ghi 
	int putc(int ch, FILE *f)
	int fputc(int ch, FILE *f)
//Doc
	int getc( FILE *f)
	int fgetc( FILE *f)
```

<a name="42"></a>
##### 4.2 Nhập xuất chuỗi
```
//Ghi 
	int fputs(const char *s, FILE *f)
//Doc
	char *fgets(const char *s, int n, FILE *f)
```

<a name="43"></a>
##### 4.3 Ðọc ghi dữ liệu theo khuôn dạng
```
//Ghi 
	int fprintf(FILE *f , const char *đặc tả,....)
//Doc
	fscanf(FILE *f , const char *đặc tả,....)
```

<a name="44"></a>
##### 4.4 Ðọc ghi số nguyên
```
//Ghi 
	int putw(int n, FILE *f)
//Doc
	int getw(FILE *f)
```

<a name="45"></a>
##### 4.5 Nhập xuất chuỗi

```
//Ghi 
	int fwrite(void *ptr, int size, int n, FILE *f)
//Doc
	int fread(void *ptr, int size, int n, FILE *f)
```

<a name="5"></a>
##### 5. Các hàm dành cho con trỏ và tệp tin

-  void rewind(FILE *f)
Đưa con trỏ về đầu tệp tin
- Dời con trỏ tập tin đi số_byte tính từ vt_bắt_đầu.
SEEK_SET (0) : Vị trí đầu tập tin
SEEK_CUR (1): Vị trí hiện hành
SEEK_END (2): Vị trí cuối tập tin.
-  long ftell(FILE *f)
Cho biết cị trí lúc này của con trỏ tính từ đầu tệp tin

<a name="6"></a>
##### 6. Các hàm quản lý thư mục

- int chdir(char *s)
- char *getcwd(char *s, int n)
- int mkdir (char *s)
- int rmdir(char *s)
- int findfirst(char *path, struct ffblk *fd, int attrib)
- int findnext(struct ffblk *fd)
