
public class nhanvienbanthoigian extends NhanVien {

	private int songaylamviec;
	private static int tiencong1ngay = 100000;
	
	
	public nhanvienbanthoigian(int maMV, String hoten, String ngaysinh,
			String diachi, String sodt, int songaylamviec) {
		super(maMV, hoten, ngaysinh, diachi, sodt);
		// TODO Auto-generated constructor stub
		this.songaylamviec = songaylamviec;
	}
	
	public void setsongaylamviec(int songay) {
		this.songaylamviec = songay;
	}
	
	public int getsongaylamviec() {
		return this.songaylamviec;
	}
	
	public void nhap() {
		super.nhap();
		System.out.println("Nhap so ngay lam viec: ");
		setsongaylamviec(Integer.parseInt(s.nextLine()));
	}
	
	public void  xuat() {
		super.xuat();
		System.out.println("So ngay lam viec: " + getsongaylamviec() + " Tien cong 1 ngay " + tiencong1ngay);
	}
	public int luong() {
		return tiencong1ngay * this.songaylamviec;
	}
	
	
	
}
