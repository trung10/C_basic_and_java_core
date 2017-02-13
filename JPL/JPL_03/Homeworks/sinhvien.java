import java.util.Scanner;

public class sinhvien {
	private String ten, masv, mail, diachi;
	private float diemjava, diemandroid;
	private int sodt;
	Scanner s = new Scanner(System.in);

	public sinhvien() {
		// TODO Auto-generated constructor stub
		System.out.println("Nhap ten, ma sinh vien, mail, dia chi: ");
		ten = s.nextLine();
		masv = s.nextLine();
		mail = s.nextLine();
		diachi = s.nextLine();
		System.out.println("Nhap so dien thoai, diem java va diem androids");
		sodt = Integer.parseInt(s.nextLine());
		diemjava = Float.parseFloat(s.nextLine());
		diemandroid = Float.parseFloat(s.nextLine());
	}

	public void show() {
		System.out.println("Ten: " + ten + " ma sinh vien: " + masv
				+ " mail: " + mail + " dia hi:  " + diachi + " so diem thoai " + sodt 
				+ " Diem trung binh: " + (diemandroid + diemjava)/2);
	}
	
	
}



public class main {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		sinhvien sv1 = new sinhvien();
		sv1.show();
	}

}
