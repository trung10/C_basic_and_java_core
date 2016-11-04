### **STRUCT**

### Mục lục

[1. KIỂU ENUM](#1)

- [1.1. Cú pháp](#11)
- [1.2. Ví dụ](#12)

[2. Struct](#2)

- [2.1 Khai báo](#21)
- [2.2 Khai báo dùng typedef](#22)
- [2.3 Truy nhập đến các thành phần của cấu trúc](#23)
- [2.4.Con trỏ cấu trúc](#24)
- [2.5.Thành phần kiểu FIELD (nhóm bit)](#25)
- [2.6.Mảng các cấu trúc](#26)

---

</a name="1"></a>
### 1. KIỂU ENUM

</a name="11"></a>
##### 1.1. Cú pháp

```
enum <Tên kiểu> {<Phần tử 1>,<Phần tử 2>,...} <Tên biến 1>,<Tên biến 2>,..;
enum <Tên kiểu> {<Phần tử 1>,<Phần tử 2>,...};
enum {<Phần tử 1>,<Phần tử 2>,...} <Tên biến 1>,<Tên biến 2>,..;
enum {<Phần tử 1>,<Phần tử 2>,...};
```

</a name="12"></a>
##### 1.2 Ví dụ

```
enum weekday{SUNDAY,MONDAY,TUESDAY,WEDSDAY,THURSDAY,FRIDAY,SATURDAY} day;

```

</a name="2"></a>
### 2. Struct

Cấu trúc là một kiểu dữ liệu bao gồm nhiều thành phần có thể thuộc nhiều kiểu dữ liệu khác nhau. Các thành phần được truy nhập thông qua tênn. Khái niệm cấu trúc trong C có nhiều nét tương tự như khái niệm về bản ghi (record) trong PASCAL hay trong FOXPRO.

</a name="21"></a>
##### 2.1 Khai báo

```
Struct <Tên câu trúc> {
	<khai báo các thành phần>
} <danh sánh các biến thuộc cấu trúc>;
```

</a name="22"></a>
##### 2.2 Khai báo typedef

```
typedef <tên kiểu đã có> <Kiểu mới>;

typedef struct Struct <Tên câu trúc> {

	<khai báo các thành phần>
} <danh sánh các biến cấu trúc>;
```
- Ví dụ

```
typedef int * PTR_INT;

typedef struct hoc_sinh{
	char ho_ten[20];
	float diem;
}t_hoc_sinh,*ptr_hoc_sinh;

```
</a name="23"></a>
##### 2.3 Truy nhập đến các thành phần của cấu trúc

- Nguyên tắc chung
Các thành phần của cấu trúc được truy nhập thông qua tên biến cấu trúc và tên thành phần. Nguyên tắc chung như sau:
tên_biến_cấu_trúc.tên_thành_phần
chẳng hạn để truy nhập đến các thành phần của biến hs chúng ta viết như sau:
hs.ho_ten
hs.diem

- Lưu ý:

Không nên sử dụng toán tử  & đối với các thành phần cấu trúc (đặc biệt đối với các thành phần không nguyên) trong khi nhập dữ liệu vì điều đó hay dẫn đến việc treo máy. Ðối với các biến cấu trúc
đơn ví dụ hs có thể sử dụng #define để rút gọn "đường truy nhập"
đến các thành phần cấu trúc.

</a name="24"></a>
##### 2.4 Con trỏ cấu trúc

- Cách khai báo

Một biến cấu trúc cũng là một biến trong bộ nhớ, do đó, ta cũng có thể lấy địa chỉ  của một biến cấu trúc bằng toán tử lấy địa chỉ &. Giá trị trả lại làđịa chỉ đến trường đầu của cấu trúc.
Ta có thể khai báo một biến con trỏ chỉ đến một cấu trúc để có thể "cất" địa chỉ  của một biến cấu trúc nào đó cần thiết. Cú pháp khai báo một biến con trỏ cấu trúc như sau:
```
struct <tên cáu trúc> *<tên con trỏ>
```

Tất nhiên khi đó biến con trỏ cấu trúc ptrhs này chỉ mới được cấp chỗ, và được ghi nhận là con trỏ chỉ đến cấu trúc hoc_sinh, còn đối tượng mà con trỏ này trỏ tới vẫn chưa được chuẩn bị gì cả, và do đó chưa thể dùng được đối tượng này. Chúng ta phải gán cho nó một
địa chỉ của một biến cấu trúc cùng kiểu nào đó đã được khai báo hoặc cũng có thể xin cấp phát một vùng bộ nhớ chỉ bởi con trỏ thông qua các hàm cấp phát động.

ví dụ:

```
	struct hoc_sinh hs={"Nguyen van A",6.5};/*khai báo và khởi đầu biến cấu trúc*/
	struct hoc_sinh *ptrhs;
	ptrhs= &hs;
```
	
- Truy xuất các thành phần cấu trúc

Việc truy xuấtđến một thành phần của cấu trúc thông qua một con trỏ được thực hiện bằng phép toán kép ->. Chẳng hạn có thể in 
ra các thành phần của hs bằng hai câu lệnh sau:

```
	printf("\nHo va ten hoc sinh %s",ptrhs->ho_ten);
	printf("\nDiem %6.3f",ptrhs->diem);
```

- Ứng dụng

Việc sử dụng con trỏ chỉ đến cấu trúc thường được sử dụng để truyền cấu trúc đến cho một hàm. Tất nhiên chúng ta có thể gửi trực tiếp một cấu trúc làm đối số cho một hàm, nhưng nếu cấu trúc đó lớn, việc chép lại toàn bộ cấu trúc đó để gửi đi sẽ làm mất nhiều thời gian. Hơn nữa, có thể chúng ta lại muốn thay đổi nội dung của 
cấu trúc đó từ một hàm khác. Trong những trường hợp đó, nên gửi
địa chỉ của cấu trúc đó cho hàm. Một ứng dụng khác của con trỏ cấu trúc mà chúng ta sẽ đề cập đến trong các phần sau là việc xây dựng các cấu trúc tự trỏ như: danh sách liên kết (còn gọi là danh 
sách móc nối).

</a name="25"></a>
##### 2.5 Thành phần kiểu FIELD (nhóm bit)

- Khai báo

```
struct struct_field {
unsigned field1 :số_bit1;//field1 Kiểu của các thành phần int hay unsiged int
int field2 :số_bit2;
...
}var_field;

```

ví dụ:

```
struct date
{
unsined int day: 5;/*giá trị ngày từ 1 đến 31*/
unsined month : 4;/*tháng từ 1đến 12*/
unsined year :5; /*chỉ xét 32 năm : 1980-2011*/
int t: 2; /*0:mm-dd*/
}x;

```

- Lưu ý:


> Liên quan đến các cấu trúc kiểu field chúng ta có một số điểm cần lưu ý sau:
>- Không cho phép lấy địa chỉ của các thành phần kiểu field. Nghĩa là phép toán dạng &x.a là không hợp lệ.
>- Không thể xây dựng các mảng có kiểu cấu trúc field.
>- Một hàm không thể trả về một giá trị có kiểu cấu trúc field.
>- Khi muốn bỏ qua một số bit nào đó chúng ta bỏ trống tên trường.


- Ứng dụng:


> Tiết kiệm bộ nhớ
> Dùng trong các khai báo kiểu hợp (union) để lấy ra các bit của một từ nào đó (xem thêm phần UNION để hiểu rõ hơn nhận xét này).



</a name="26"></a>
##### 2.6 Mảng các cấu trúc

- Khai báo

Mảng mà các thành phần có kiểu cấu trúc được gọi là mảng cấu trúc. Khai báo một mảng các cấu trúc hoàn toàn tương tự như đối với khai báo một mảng bình thường, chỉ có một điểm khác là thay cho tên các kiểu dữ liệu bình thường là một tên kiểu dữ liệu cấu trúc.

- Ví dụ


```
struct hoc_sinh dshs[100];
```
