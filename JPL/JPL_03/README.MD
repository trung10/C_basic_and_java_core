## Mục lục

##### [Object oriented programming](#1)

##### [Defining Classes](#2) 

##### [Using Classes](#3)
 
##### [Referencer / Values](#4)

##### [Static Types / Methods](#5) 


<a name = "1"></a>
## Object oriented programming

##### Xét một ví dụ

Một em bé thì có nhiều thuộc tính tên, tuổi, giới tính, cân nặng,...

Nếu theo cánh nguyên thủy thì chùng ta sẽ khai từng thuộc tính cho từng em bé.

````
String tenBaby1;
int tuoiBaby1;
float canNang1;
boolean laName;

String tenBaby2;
int tuoiBaby2;
float canNang2;
boolean laName;
````

* Khi chúng ta sử  dụng classes, tạo ra đối tượng em bé gồm các thuộc tính đó.


* Nếu chúng ta có 500 em bé, việc này khai này sẽ rất mệt mõi.

* Tạo ra nhiều đứa một cánh dể dàng nhờ vào class. Chúng ta có thể tạo ra đối tượng lớn hơn khi có nhiều đối tượng nhỏ. Ví dụ có 500 em bé, và trăm ý tá, chung ta có thể tạo ra Bệnh viện. 
 
<a name = "2"></a>
## Defining Classes

````
public class Baby {

	// Thuoc tinh
	
	// Phuong thuc

} 
````

* Baby siblings

````
public class Baby {
	String name;
	double weight = 5.0;
	boolean isMale;
	int numPoops = 0;
	Baby[] siblings;
} 
````

##### Constructors 

````
public class CLASSNAME{
	CLASSNAME ( ) {
	}
	CLASSNAME ([ARGUMENTS]) {
	}
}


CLASSNAME obj1 = new CLASSNAME();
CLASSNAME obj2 = new CLASSNAME([ARGUMENTS])
````

* Tên Constructor == tên lớp
* Không có loại trở lại - không bao giờ trả về bất cứ điều gì
* Thông thường khởi tạo các fields
* Tất cả các lớp cần ít nhất một constructor

##### Methods

* Chúng ta khởi tạo fields sẽ có các phương thức liên quan.

* Ví dụ em bé có tên, ngày sinh, giới tính, ta sẽ có các phương thức như setname, getname, getage,...




<a name = "3"></a>
## Using Classes

````
// class Definition

public class Baby {…}
// class Instances

Baby shiloh = new Baby(“Shiloh Jolie-Pitt”, true);
Baby knox = new Baby(“Knox Jolie-Pitt”, true); 
````

* Accessing fields, methods

````
	Object.FIELDNAME 

	Object.METHODNAME([ARGUMENTS]) 
````
	

<a name = "4"></a>
## Referencer / Values

* Primitive là các kiểu cơ bản như int, float, double,...  (các giá trụ thức tế lưu trữ trong biến).

* Referncer là các kiểu dãy và đối tượng như String, int[], baby,...


````
baby david1 = new baby("david");
baby david2 = new baby("david");

david1 != david2
//Vì là 2 object's location riêng biệt. Cũng primitive name = "david".
````

* Sử dụng = để update referencer

* [] or .

** Tuân theo các tham chiếu đến các đối tượng
** Có thể sửa đổi các đối tượng, nhưng không bao giờ tham chiếu

* Imagine

- Tiếp theo hướng dẫn đến một ngôi nhà
- Di chuyển các đồ đạc xung quanh
* Analogous to

- Sau khi tham chiếu đến một đối tượng
- Thay đổi các fields trong đối tượng

* References truyền tham chiếu vào methods.
<a name = "5"></a>
## Static Types / Methods

* Static types có thể gọi nó ra mà không cấn tạo ra bất kỳ thể hiện nào của objects.

* Static types có thể tham chiếu fields chung của object.

* Static methods thuộc class chứ không phải object.

* Static methods có thể dùng mà không cần instance của lớp.

* Non-static methods có thể  tham đến static methods.

* Hàm main static bởi vì main là điểm khởi đầu thức chương trình và static để  gọi mà không cần tao ra bất kỳ thể hiện nào của nó.

