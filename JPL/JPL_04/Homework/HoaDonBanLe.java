import java.util.Scanner;

public class HoaDonBanLe extends Hoadon{
	private String hoten;
	private int SCM;
	Scanner s = new Scanner(System.in);
	
	public HoaDonBanLe() {
		
	}

	public HoaDonBanLe(String maHD, String ngayLap, String tenHangHoa, String hoten, int SCM) {
		// TODO Auto-generated constructor stub
		super(maHD, ngayLap, tenHangHoa);
		this.hoten = hoten;
		this.SCM = SCM;
	}

	public void settenkhachang(String name) {
		this.hoten = name;
	}

	public String gettenkhachang() {
		return this.hoten;
	}

	public void setSCMT(int SCMT) {
		this.SCM = SCMT;
	}

	public int getSCMT() {
		return this.SCM;
	}

	public void nhap() {
		super.nhap();
		System.out.println("Nhap ho ten khach hang va so chung minh nhan dan");
		this.hoten = s.nextLine();
		this.SCM = Integer.parseInt(s.nextLine());
	}
	
	public void xuat() {
		super.xuat();
		System.out.println("Ten khac hang " + this.hoten + " so chung minh thu " + this.SCM);
	}
}
