## RẼ NHÁNH VÒNG LẶP

 1. Rẽ nhánh
 1.1 Cấu trúc if và if else
	**Cấu trúc if**
	 ````if(<Biểu thức luân lý>){
	 <khối lệnh>;
	 }
	 ````
	 ![enter image description here](https://sites.google.com/a/als.edu.vn/tin-hoc-11-bai-9-cau-truc-re-nhanh/_/rsrc/1446660655896/process/Untitled-1.png)
	
	**Cấu trúc if else**
	````if(<Biểu thức luân lý>){
	<khối lệnh 1>;
	}
		else {
		<Khối lệnh 2>
	}
	````
	![enter image description here](https://sites.google.com/a/als.edu.vn/tin-hoc-11-bai-9-cau-truc-re-nhanh/_/rsrc/1446660780854/process/Untitled-2.png)
1.2 Switch và switch default
**Switch case**
````switch(<Biểu thức>){
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
````
![enter image description here](https://raw.githubusercontent.com/nguyenchiemminhvu/CPP-Tutorial/master/2-cau-truc-re-nhanh/2-3-cau-lenh-switch-case/0.png)
**Switch default**
````switch(<Biểu thức>){
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
````
![enter image description here](http://programmingtrick.com/userfiles/switch%20case.png)
 1.3 Cấu trúc lặp không điều kiện
 **break**
 > Thông thường lệnh break dùng để thoát khỏi vòng lặp không xác định điều kiện dừng hoặc bạn muốn dừng vòng lặp theo điều kiện do bạn chỉ định Việc dùng lệnh break để thoát khỏi vòng lặp thường sử dụng phối hợp với lệnh if. Lệnh break dùng trong for, while, do…while, switch. Lệnh break thoát khỏi vòng lặp chứa nó.

	**go to**
	> Lệnh goto dùng để chuyển tới một câu lệnh nào đó đứng sau nhãn đã chỉ định. Nhãn là tên hợp lệnh đứng trước lệnh mà ta cần nhảy tới. Lệnh goto kết hợp với lệnh if cũng có thể tạo ra một vòng lặp.
Cú pháp lệnh goto: goto nhan;
Cú pháp nhãn: nhan : lệnh;
	Tuy nhiên khi sử dụng lệnh goto bạn cần chú ý các điểm sau:
-Nếu lệnh goto và nhãn nằm trong 1 hàm thì lệnh goto chỉ được phép nhảy trong hàm đó và không được phép nhảy sang hàm khác.
-Không được dùng lệnh goto nhảy từ ngoài vào trong một khối nhưng được phép nhảy từ trong khối ra ngoài. 

	**continue**
	>Được dùng trong vòng lặp for, while, do…while. Khi lệnh continue thi hành quyền điều khiển sẽ trao qua cho biểu thức điều kiện của vòng lặp gần nhất. Nghĩa là lộn ngược lên đầu vòng lặp, tất cả những lệnh đi sau trong vòng lặp chứa continue sẽ bị bỏ qua không thi hành.

 2. Vòng lặp
	2.1 Lệnh for
	````for(<Biểu thức 1>; <Biểu thức 2>; <Biểu thức 3>){
	<khối lệnh>;
	}
	````
	![enter image description here](http://1.bp.blogspot.com/-ognNzsULg8E/TgYeKlQenLI/AAAAAAAAABY/AVGrzmQ9B0M/s1600/1.bmp)
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
 
	**Vi dụ**
	```` #include <stdio.h>
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
	````
	> Kết quả
	0 1 2 3 4 5 6 7 8 9

	````Déo biết ghi gì
	````