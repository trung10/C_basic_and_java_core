## Mục lục

##### [Design](#1)

##### [Debugging](#2)

##### [Interfaces](#3)


<a name = "1"></a>
## Design

##### Good program

* Đúng / Không có lỗi

* Dễ hiểu

* Dễ chỉnh sữa mở rộng

* Hiệu năng tốt (tốc độ)

##### Consistency (Tính nhất quán)

* Code một cánh nhất quán dễ hiểu dễ viết

* Programming “style” guides: xác định quy về cánh làm việc

* Java có “standard” style guidelines được chấp nhận rộng rãi

##### Naming (đặt tên)

* Variables: Là danh từ, viết thường chữ đầu, ghi hoa chữ cánh ra. vd: x, shape, fileName, hoTen

* Methods: Động từ, ghi thường chữ cái đâu. vd: getSize(), nhap()

* Classes: Danh từ, Ghi hoa chữ cái đầu. Vd: Shape, WebPage

##### Good Class Design

* Dễ hiểu và dễ sử dụng

* Làm các private thuộc tính và phương thức mặc định

* Chỉ làm phương thức public nếu cần

* Nếu cần truy cập đến thuộc tính hãy tạo phương thức:
````

public int getBar(){
	return bar;
}
````

<a name = "2"></a>
## Debugging (Tìm lỗi và sữa lỗi)

##### Step 1: Không làm sai

* Reuse (tái sử dụng): tìm code hiện tại mà mình muốn

* Design: Nghĩ trước khi code

* Best Practices: Recommended procedures/techniques để tránh các vấn đề chung

###### Design: Pseudocode (mã giả)

* Trình độ cao, mô tả dễ hiểu về những gì mà chương trình phải làm

* Không cần chú ý chi tiết, hãy chú ý đến cấu trúc

###### Design

* Trình bày một cánh trực đối tượng, hoặc làm thế nào một chương trình làm việc

* Đừng lo lắng các ký hiệu cụ thể, chỉ cần làm cái gì đó ý nghĩa

* Scrap paper is useful (Giấy tái chế rất hữu dụng)

##### Step 2: Find Mistakes Early

* Test your design

* Dùng tools

* Kiểm tra sự hoàn thiện

* Kiểm tra xác nhận công việc 

##### Step 3: Reproduce the Error

* Đoán tại sao lại gặp lại lỗi

* Tạo ra một trường hợp để thử

##### Step 4: Generate Hypothesis (tạo giả thuyết)

* Điều gì đang xẩy ra sai?

* Cái gì có thể gây lỗi?

##### Step 5: Collect Information (thu thập thông tin)

* Nếu x có vấn đề, làm sao xá minh?
* Cần thông tin những gì đang xẩy ra trong chương trình

##### Step 6: Examine Data (kiểm tra dữ liệu)

* Giả thuyết có đúng ? sữa lỗi : tạo giả thuyết mới

* Sử dụng phương thức, viết và test 1 lần sử dụng nhiều lần. Sư dụng mà không biết nó hoạt đọng như thế nào: encapsulation / information hiding (ẩn thông tin)

* Sử dụng đối tượng: kết hợp với biến và phương thức tạo ra một giao diện đơn giản

## Implementation / Interface

* Thao tác với các đối tượng mà không biết chúng hoạt đọng ra sao

* Hữu ích khi có các đối tương tự nhưng không giống hệt nhau

* Dùng code chùa