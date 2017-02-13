
public class HoaDonBanSy extends Hoadon{
	private String tenCongTy;
	private String diaChi;
	
	public HoaDonBanSy() {
		// TODO Auto-generated constructor stub
	}
	
	public HoaDonBanSy(String maHD, String ngayLap, String tenHangHoa, String tenCongTy, String diachi) {
		// TODO Auto-generated constructor stub
		super(maHD, ngayLap, tenHangHoa);
		this.tenCongTy = tenCongTy;
		this.diaChi = diachi;
	}
	
	public void setTenCongTy(String ten) {
		this.tenCongTy = ten;
	}
	
	public String getTenCongTy() {
		return this.tenCongTy;
	}
	
	public String getDiachi() {
		return this.diaChi;
	}
	
	public void setDiachi(String diachi) {
		this.diaChi = diachi;
	}
	
	public void  xuat() {
		super.xuat();
		System.out.println("Ten cong ty " + this.tenCongTy + " dia chi " + this.diaChi);
	}
}
