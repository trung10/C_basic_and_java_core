import java.util.Scanner;



public class demo {

	/**
	 * @param args
	 */
	
	public static void pt(int a, int b){
		try {
			float x;
			x = -b/a;
			System.out.println("x = "+x);
		} catch (Exception e) {
			System.err.println("Phuong trinh vo nghiem");
		}
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("ax + b =0, Enter a, b: ");
		int a, b;
		Scanner s = new Scanner(System.in);
		try {
			a = Integer.parseInt(s.nextLine());
			b = Integer.parseInt(s.nextLine());
			pt(a, b);
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
