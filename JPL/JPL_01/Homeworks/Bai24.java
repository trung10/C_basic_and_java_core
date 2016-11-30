import java.util.Scanner;



public class demo {

	/**
	 * @param args
	 */
	
	public static void pt(int a, int b, int c){
		try {
			float delta;
			delta = (float)Math.sqrt(b*b-4*a*c);
			try {
				float x1= (float)(-b+delta)/(2*a);
				float x2= (float)(-b-delta)/(2*a);
				System.out.println("x1 = "+x1+" x2 = "+x2);
			} catch (Exception e) {
				System.err.println("Phuong trinh suy bien thanh bac nhat mot an");
			}
		} catch (Exception e) {
			System.err.println("Phuong trinh vo nghiem");
		}
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("ax2 + bx + c =0, Enter a, b, c: ");
		int a, b, c;
		Scanner s = new Scanner(System.in);
		try {
			a = Integer.parseInt(s.nextLine());
			b = Integer.parseInt(s.nextLine());
			c = Integer.parseInt(s.nextLine());
			pt(a, b, c);
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
