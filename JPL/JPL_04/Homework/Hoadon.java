import java.util.Scanner;

public class Hoadon {

	private String maHD;
	private String ngayLap;
	private String tenHangHoa;
	Scanner s = new Scanner(System.in);

	public Hoadon() {
		// TODO Auto-generated constructor stub
	}

	public Hoadon(String maHD, String ngayLap, String tenHangHoa) {
		// TODO Auto-generated constructor stub
		this.maHD = maHD;
		this.ngayLap = ngayLap;
		this.tenHangHoa = tenHangHoa;
	}

	public void setmaHD(String maHD) {
		this.maHD = maHD;
	}

	public String getmaHD() {
		return this.maHD;
	}

	public void setngayLap(String ngayLap) {
		this.ngayLap = ngayLap;
	}

	public String getngayLap() {
		return this.ngayLap;
	}

	public void setTenHangHoa(String tenHangHoa) {
		this.tenHangHoa = tenHangHoa;
	}

	public String getTenHangHoa() {
		return this.tenHangHoa;
	}

	public void nhap() {
		System.out.println("Nhap ma hoa don, ngay lap va ten hang hoa");
		setmaHD(s.nextLine());
		setngayLap(s.nextLine());
		setTenHangHoa(s.nextLine());
	}
	public void xuat() {
		System.out.println("ma hoa don: " + this.maHD + " ngay lap " + this.ngayLap + " ten mat hang " + this.tenHangHoa );
	}
}
