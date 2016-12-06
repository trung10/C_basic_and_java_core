import java.util.Scanner;

public class phanso {

	/**
	 * @param args
	 */
	private int tu, mau;
	private float phanso;
	Scanner s = new Scanner(System.in);

	public phanso() {
		// TODO Auto-generated constructor stub
		System.out.println("Nhap tu/mau: ");

		tu = Integer.parseInt(s.nextLine());
		mau = Integer.parseInt(s.nextLine());
		phanso = tu / (float) mau;
	}

	public phanso(float a) {
		phanso = a;
	}

	public void setPhanso(float phanso) {
		this.phanso = phanso;
	}

	public float getPhanso() {
		return phanso;
	}

	public static float tong(phanso a, phanso b) {
		return a.phanso + b.phanso;
	}

	public static float tich(phanso a, phanso b) {
		return (float) (a.phanso * b.phanso);
	}

	public static float hieu(phanso a, phanso b) {
		return a.phanso - b.phanso;
	}

	public static float thuong(phanso a, phanso b) {
		return (float) a.phanso / b.phanso;
	}
}


public class main {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		phanso a = new phanso();
		phanso b = new phanso();
		
		System.out.format("Tong tich hieu thuong: %.3f\t%.3f\t%.3f\t%.3f\t", phanso.tong(a, b),phanso.tich(a, b),phanso.hieu(a, b),phanso.thuong(a, b));
		
	}

}
