## Mục Lục

##### [Review](#1)

##### [Exceptions](#2)

##### [IO](#3

<a name = "1"></a>
## Review

##### Interface

* Là một bản thiết kế ngắn gọn

* Tất cả các thuộc tính đề là final

* Implement tất cả các methods

##### Inheritance (thừa kế)

* Lớp con có thể sử dụng tất cả thuộc tính của lớp cha (trừ thuộc tính private)

* Lớp con có thể sử thực hiện tất cả các phương thức của lớp cha (trừ methods private)

* Có thể sử dụng lớp con như lớp cha

* Thừa kế từ lớp đã thừa kế

* Đa thừa kế (Một lớp có thể thừa kế từ nhiều lớp)

* Inheritance Summary

• class A extends B {} == A is a subclass of B
• A has all the fields and methods that B has
• A can add it’s own fields and methods
• A can only have 1 parent
• A can replace a parent’s method by reimplementing it
• If A doesn’t implement something Java

<a name = "2"></a>
## Exceptions (ngoại lệ)

* NullPointerException

* ArrayIndexOutOfBoundsException

* ClassCastException

* RuntimeException

* Là sự kiện xẩy ra khi có 1 bất ngờ nào đó xẩy ra

````
	null.something();
	(new int[1])[1] = 0;
	int i = "string";
````

* Biết được code đang dùng trong methods có điều gì đó sai

* Debugging và hiểu sự kiểm soát hoạt động

* Java không biết nó đang làm gì cho nên java

*** Tạo một đối tượng Exception
*** Bao gồm thông tin hữa ích
*** "throws" the Exception

##### public class Exception

* Exception là một class

* Kế thừa từ class Exception

````
public Object get(int index) throws ArrayOutOfBoundsException {
	If (index < 0 || index >= size())
	throw new ArrayOutOfBoundsException(“”+index);
}
````

* *throws* gọi java that get may the ArrayOutOfBoundsException

* *throw* actually throws the Exception (sorry)

##### Catching an Exception

* Có thể tránh ngoại lệ bởi Catching và rethrowing

````
try{

}catch{

}
````

* try chạy lệnh xem có ngoại lệ không

* Nếu có ngoại lệ thì chạy code ở catch

##### Rethowing

* Gọi methods throw Exception

````
void doBad() throws ArrayOutOfBoundsException {
	get(-1);
}
````
 
<a name = "3"></a>
## IO

##### InputStream

* a stream of bytes

* Input theo byte

##### InputStreamReader

* Reader is a class for character streams

* Input theo character

* InputStreamReader mất một InputStream và
chuyển đổi byte sang character

* Vẫn bất tiện vì chỉ có thể đọc một ký tự tại một thời điểm

##### BufferedReader

* Đọc từng dòng

* khai báo

````
	InputStreamReader ir = new InputStreamReader(System.in);
	BufferedReader br = new BufferedReader(ir);
	br.readLine();
````

##### FileReader

````
FileReader fr = new FileReader(“readme.txt”);
BufferedReader br = new BufferedReader(fr);
````





