import java.util.Scanner;

public class Nhanvienbanthoidan extends NhanVien {

	private int hesoluong;
	private int luongcb;
	private int phucap;
	Scanner s = new Scanner(System.in);
	

	public Nhanvienbanthoidan(int maMV, String hoten, String ngaysinh,
			String diachi, String sodt, int hesoluong,  int luongcb, int phucap) {
		super(maMV, hoten, ngaysinh, diachi, sodt);
		// TODO Auto-generated constructor stub
		this.hesoluong = hesoluong;
		this.luongcb = luongcb;
		this.phucap = phucap;
		
	}
	
	public void nhap() {
		System.out.println("Nhap he so luong, luong co ban, tro cap");
		this.hesoluong = Integer.parseInt(s.nextLine());
		this.luongcb = Integer.parseInt(s.nextLine());
		this.phucap = Integer.parseInt(s.nextLine());
	}
	
	public void xuat() {
		super.xuat();
		System.out.println("Hesoluont\tLuongcoban\tTrocap");
		System.out.println(this.hesoluong + "\t" + this.luongcb + "\t" + this.phucap);
	}
	public int luong(){
		return this.hesoluong * this.luongcb + this.phucap;
	}
	
	
}
