import java.util.Scanner;

public class Nhanvienbanthoidan extends NhanVien {
	private int hesoluong;
	private int luongcb;
	private int phucap;
	NhanVien nvbtt = new NhanVien();
	Scanner s = new Scanner(System.in);

	public void nhap() {
		nvbtt.nhap();
		System.out.println("Nhap he so luong, luong co ban, tro cap");
		this.hesoluong = Integer.parseInt(s.nextLine());
		this.luongcb = Integer.parseInt(s.nextLine());
		this.phucap = Integer.parseInt(s.nextLine());
	}
	
	public void xuat() {
		nvbtt.xuat();
		System.out.println("Hesoluont\tLuongcoban\tTrocap");
		System.out.println(this.hesoluong + "\t" + this.luongcb + "\t" + this.phucap);
	}
	public int luong(){
		return this.hesoluong * this.luongcb + this.phucap;
	}
	
	
}
