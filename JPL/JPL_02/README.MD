## Mục lục

##### [Phong cánh lập trình](#1)

##### [Loops](#2)

##### [Phong cánh lập trình](#3)

<a name="1"></a>
## Phong cánh lập trình

##### Good programming style

* Dễ đọc
* Dễ hiểu

##### Đặt tên biến, phương thức một cánh đầy đủ ý nghĩa

* ví dụ:

````
int diemToan;
String ten;
string ho;
````

##### indentation (Thụt đầu dòng)

````
public static int tongNsotunhiendautien(int n){
		if (n<4||n>49) {
			return 0;
		}else {
			int tong = 0;
			for(int i=0; i<=n;i++){
				tong += i;
			}
			return(tong);
		}
	}
````

##### whitespaces

````
double cel = fahr * 42.0 / (13.0 - 7.0);
````

##### So sánh trong if-else if-else

* Sử dụng if-else, if-else if một cánh hợp lý

<a name = "2"></a>
## Loops

##### Vòng lặp while, for tương tự C

* Chú ý biến đếm tránh lập vô hạn

##### break, continue

* break thoát khỏi vòng lặp, đặc biệt với bài toán tìm kiếm, thoát khỏi vòng lặp khi tìm thấy kết quả, tránh lặp tới tận cùng.

* continue bỏ qua lặp nhảy đến vòng lặp tiếp theo. Bản chất là nhảy xuống vị trí kết thúc (});

<a name = "3"></a>
## Arrays

##### Khai báo

````
int[] arrayInt = new int[5];
arrayInt[0] = 5;
arrayInt[0] = 9;
````

##### Truy cập

`````
int[] dayso = { 2, 5, 7, 9, 10};
int x = dayso[2] + 2;
//lấy chiều dài của mảng
int size = dayso.lenght;
````
