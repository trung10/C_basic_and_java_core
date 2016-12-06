import java.util.Scanner;

public class hinhtron {
	private float r;
	private float a, b;
	Scanner s = new Scanner(System.in);

	public hinhtron() {
		// TODO Auto-generated constructor stub
		System.out.println("Nhap ban kinh r va toa do tam (a, b): ");
		r = Float.parseFloat(s.nextLine());
		a = Float.parseFloat(s.nextLine());
		b = Float.parseFloat(s.nextLine());
	}
	
	public void show() {
		System.out.println("tam(" + a + ", " + b + ") ban kinh r = " + r);
	}
	
	public static float chuvi(hinhtron o) {
		return (float) (Math.PI*2*o.r);
	}
	
	public static float dientic(hinhtron o) {
		return (float)(Math.PI*Math.pow(o.r, 2));
	}
	
}



public class main {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		hinhtron o = new hinhtron();

		o.show();
		
		System.out.println("Chu vi " + hinhtron.chuvi(o) + " dien tich " + hinhtron.dientic(o));
	}

}
