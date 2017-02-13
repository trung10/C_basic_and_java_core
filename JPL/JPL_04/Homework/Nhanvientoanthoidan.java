import java.util.Scanner;

public class Nhanvientoanthoidan extends NhanVien {

	private int hesoluong;
	private static int luongcb = 690000;
	private int phucap;
	Scanner s = new Scanner(System.in);

	public Nhanvientoanthoidan(int maMV, String hoten, String ngaysinh,
			String diachi, String sodt, int hesoluong, int phucap) {
		super(maMV, hoten, ngaysinh, diachi, sodt);
		// TODO Auto-generated constructor stub
		this.hesoluong = hesoluong;
		this.phucap = phucap;

	}

	public void sethesoluon(int n) {
		this.hesoluong = n;
	}

	public int gethesoluon() {
		return this.hesoluong;
	}

	public int getphucap() {
		return this.phucap;
	}

	public void setphucap(int n) {
		this.phucap = n;
	}

	public void nhap() {
		super.nhap();
		System.out.println("Nhap he so luong, tro cap");
		sethesoluon(Integer.parseInt(s.nextLine()));
		setphucap(Integer.parseInt(s.nextLine()));
	}

	public void xuat() {
		super.xuat();
		System.out.println("Hesoluont\tLuongcoban\tTrocap");
		System.out.println(gethesoluon() + "\t" + luongcb + "\t" + getphucap());
	}

	public int luong() {
		return this.hesoluong * luongcb + this.phucap;
	}

}
