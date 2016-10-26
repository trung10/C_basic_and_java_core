## **CON TRỎ**

### 1. Khái niện

##### 1.1 Địa chỉ của biến

* Xét khai báo: 
	```
	int a=15;
    ```
	Theo khai báo này, máy sẽ cấp phát cho biến a một khoảng nhớ gồm 2 byte liên
	tiếp. Ðịa chỉ của biến là số thứ tự của byte đầu tiên trong một dãy các byte liên
	tiếp mà máy dành cho biến.
    
    Ðịa chỉ của hai biến kiểu int liên tiếp
	cách nhau 2 byte, địa chỉ của hai biến kiểu float liên tiếp cách nhau 4 byte. Nên có
	thể phân biệt được các kiểu địa chỉ: Ðịa chỉ kiểu int, địa chỉ kiểu float, địa chỉ
	kiểu double..
 * Lấy địa chỉ của biến

	```
	&x
	cho ta địa chỉ của biến x.
	```
	
##### 1.2 Con trỏ

	Là một loại biến dùng để lưu địa chỉ, mỗi loại địa chỉ sẽ có một kiểu con trỏ tương ứng (phụ thuộc vào loại dữ liệu lưu trữ trong địa chỉ đó).
	
### 2. Khai báo

	```
	<kiểu dữ liệu> *tên biến con trỏ;
	```
	Ví dụ:
    ```
  	float a,*p,*q;
	p=&a; /* lưu địa chỉ của biến a vào con trỏ p*/
	q=p; /* lưu địa chỉ trong p vào con trỏ q*/
    ```
	
  * Sử dụng giá trị lưu tại vùng nhớ
	````
	float x=5,y,z=20,*px,*pz;
	px=&x; /* khi đó *px = x =5*/
	pz=&z; /* *pz = z =10*/
	khi đó ba biểu thức sau là tương đương:
	y=3*x+z;
	*py=3*x+z;
	*py=3*(*px)+*pz;
    ````
	Tóm lại: px, pz có kiểu là con trỏ float thì *px,*pz thuộc kiểu số thực.
    
    >Chú ý
    >
    > Mọi thành phần của cùng một khai báo (biến, phần tử mảng, hàm, con trỏ) khi xuất 		hiện trong biểu thức đều cho cùng một kiểu giá trị.

### 3. Bộ định tính const với con trỏ

	`const` dùng để: 

* Dùng để khai báo và khởi đầu giá trị trong các biến trong mà sau này giá trị của nó không cho phép thay đổi bởi các lệnh trong chương trình. Chúng được gọi là các đối tượng
hằng.
* Dùng để khai báo các đối con trỏ mà trong thân hàm ta không được phép làm thay đổi giá
trị các đối tượng được trỏ bởi các đối này.

	Ví dụ:
    ````
    void thu_nghiem(const int *stt)
	{
	*stt = *stt+1; /* Sai, do gia tri duoc tro boi con tro stt khong duoc thay doi */
    const int a=10;
	a++; /* Sai, khong duoc thay doi bien const a */
	printf("\n a=%d",a);
	}
    ````
