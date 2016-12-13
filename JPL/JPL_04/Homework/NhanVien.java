import java.util.Scanner;


public class NhanVien {
	private	int maNV;
	private String hoten;
	private String ngaysinh;
	private String diachi;
	private String sodt;
	Scanner s = new Scanner(System.in);
	
	public NhanVien(int maMV, String hoten, String ngaysinh, String diachi, String sodt) {
		this.maNV = maMV;
		this.hoten = hoten;
		this.ngaysinh = ngaysinh;
		this.diachi = diachi;
		this.sodt = sodt;
	}
	public void nhap(){
		// TODO Auto-generated constructor stub
		System.out.println("Nhap ma NV, ho ten, ngay sinh, dia chi, so dien thoai");
		setmaNV(Integer.parseInt(s.nextLine()));
		sethoten(s.nextLine());
		setngaysinh(s.nextLine());
		setdiachi(s.nextLine());
		setngaysinh(s.nextLine());
	}
	
	public void setmaNV(int maNV) {
		this.maNV = maNV;
	}
	
	public int getmaNV(){
		return this.maNV;
	}
	
	public void sethoten(String hoten) {
		this.hoten = hoten;
	}
	
	
	public String gethoten(){
		return this.hoten;
	}
	
	public void setngaysinh(String ngaysinh){
		this.ngaysinh = ngaysinh;
	}
	
	public String getngaysinh(){
		return this.ngaysinh;
	}
	
	public void setdiachi(String diachi) {
		this.diachi = diachi;
	}
	
	public String getdiachi() {
		return this.diachi;
	}
	
	public void setsodt(String sodienthoai) {
		this.sodt = sodienthoai;
	}
	
	public String getsodt() {
		return this.sodt;
		
	}
	
	public void xuat(){
		System.out.println("MaNV\tTen\tNgaysinh\tDiachi\tSodt");
		System.out.println(getmaNV() + "\t" + gethoten() + "\t" + getngaysinh() + "\t" + getdiachi() + "\t" + getsodt());
	}
	
}