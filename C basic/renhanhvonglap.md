## **RẼ NHÁNH VÒNG LẶP**

### Mục lục

[1. Rẽ nhánh](#1)

* [1.1 Cấu trúc if và if else](#11)
* [1.2 Switch và switch default](#12)
* [1.3 Cấu trúc lặp không điều kiện](#13)

[2. Vòng lặp](#2)

* [2.1 Lệnh for](#21)
* [2.2 Lệnh while](#22)
* [2.3 Lệnh do while](#23)

---

<a name="1"></a>
### 1. Rẽ nhánh

<a name="11"></a>
#####1.1 Cấu trúc if và if else

**Cấu trúc if**

```
	 if(<Biểu thức luân lý>){
	 <khối lệnh>;
	 }
```
	
**Cấu trúc if else**

```
	if(<Biểu thức luân lý>){
	<khối lệnh 1>;
	}
		else {
		<Khối lệnh 2>
	}
```

<a name="12"></a>
#####1.2 Switch và switch default

**Switch case**

```switch(<Biểu thức>){
		case <Giá trị 1>;
			<Lệnh 1>;
			break;
	case <Giá trị 2>;
			<Lệnh 2>
			break;
	case <Giá trị n>;
			<Lệnh n>
			break;
	}
```

**Switch default**

```switch(<Biểu thức>){
		case <Giá trị 1>;
			<Lệnh 1>;
			break;
	case <Giá trị 2>;
			<Lệnh 2>
			break;
	case <Giá trị n>;
			<Lệnh n>
			break;
	defaul <Lệnh>;
	}
```

<a name="13"></a>
#####1.3 Cấu trúc lặp không điều kiện

 **break**
 > Thông thường lệnh break dùng để thoát khỏi vòng lặp không xác định điều kiện dừng hoặc bạn muốn dừng vòng lặp theo điều kiện do bạn chỉ định Việc dùng lệnh break để thoát khỏi vòng lặp thường sử dụng phối hợp với lệnh if. Lệnh break dùng trong for, while, do…while, switch. Lệnh break thoát khỏi vòng lặp chứa nó.

**go to**

> Lệnh goto dùng để chuyển tới một câu lệnh nào đó đứng sau nhãn đã chỉ định. Nhãn là tên hợp lệnh đứng trước lệnh mà ta cần nhảy tới. Lệnh goto kết hợp với lệnh if cũng có thể tạo ra một vòng lặp.
>- Nếu lệnh goto và nhãn nằm trong 1 hàm thì lệnh goto chỉ được phép nhảy trong hàm đó và không được phép nhảy sang hàm khác.
>- Không được dùng lệnh goto nhảy từ ngoài vào trong một khối nhưng được phép nhảy từ trong khối ra ngoài.

```
nhãn;
<Khối lệnh>;
goto nhãn;
```

**continue**
>Được dùng trong vòng lặp for, while, do…while. Khi lệnh continue thi hành quyền điều khiển sẽ trao qua cho biểu thức điều kiện của vòng lặp gần nhất. Nghĩa là lộn ngược lên đầu vòng lặp, tất cả những lệnh đi sau trong vòng lặp chứa continue sẽ bị bỏ qua không thi hành.

<a name="2"></a>
###2. Vòng lặp
 
<a name="21"></a>
#####2.1 Lệnh for

```
	for(<Biểu thức 1>; <Biểu thức 2>; <Biểu thức 3>){
	<khối lệnh>;
	}
```

>*Lưu ý*
>- Biểu thức 1 bao giờ cũng chỉ được tính toán một lần khi gọi thực hiện for.
	
>- Biểu thức 2, 3 và thân for có thể thực hiện lặp lại nhiều lần.

>- Biểu thức 1, 2, 3 phải phân cách bằng dấu chấm phẩy ( ; ), các biểu thức có thể vắng mặt 1,2 hoặc cả 3 nhưng vẫn phải có dấy chấm phẩy này.

>- Nếu biểu thức 2 không có, vòng for được xem là luôn luôn đúng. Muốn thoát khỏi vòng lặp for phải dùng một trong lệnh break, goto hoặc return.

>- Với mỗi biểu thức có thể viết thành một dãy biểu thức con phân cách nhau bởi dấu phẩy. Khi đó các biểu thức con được xác định từ trái sang phải. Tính đúng sai của dãy biểu thức con trong biểu thức thứ 2 được xác định bởi biểu thức con cuối cùng

>- Trong thân for (khối lệnh) có thể chứa một hoặc nhiều cấu trúc điều khiển khác, vòng lặp khác.

>- Khi gặp lệnh break, cấu trúc lặp sâu nhất sẽ thoát ra.

>- Trong thân for có thểdùng lệnh goto để thoát khỏi vòng lặp đến vị trí mong muốn.
	
>- Trong thân for có thể sử dụng return để trở về một hàm nào đó.

>- Trong thân for có thể sử dụng lệnh continue để chuyển đến đầu vòng lặp (bỏ qua các câu lệnh còn lại trong thân).
 
**Ví dụ**

``` 
#include <stdio.h>
	int i = 0;
	void main(){
	int  = 0;
	for(;;){
	i++;
	printf("%3d, i");
	if(i == 10){
	break;
	}
	}
	}
```
	
> Kết quả
	0 1 2 3 4 5 6 7 8 9


<a name="22"></a>
#####2.2 Lệnh while

```
	while(<Điều kiện>){
	<Khối lệnh>
	}
```

**Ví dụ:**

```
	#include <stdio.h>
	#define PASS "cmmr" 
	int main(){
    char pass[100];
    /* Ham strcmp  tra ve ket qua la 0 khi 2 chuoi bang nhau  */
    while(strcmp(pass, PASS) != 0) { 
        printf("Nhap pass: ");
        gets(pass);
    }
    printf("Mat khau dung");
    return 0;
}
```
	
<a name="23"></a>
#####2.3 Lệnh do while

```
	do{
			<khối lệnh>;
	}while(Điều kiện);
```

**Ví dụ:**

```
#include <stdio.h>
int main (){
   int a = 10;
   do{
       printf("Gia tri cua a la: %d\n", a);
       a = a + 1;
   }while( a < 15 );
   return 0;
}
```
	
Kết quả

Gia tri cua a la: 10

Gia tri cua a la: 11

Gia tri cua a la: 12

Gia tri cua a la: 13

Gia tri cua a la: 14
	
