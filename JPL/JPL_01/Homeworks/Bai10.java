import java.util.Scanner;


public class demo {

	/**
	 * @param args
	 */
	
	public static int tong(int n, int x){

			return (int) Math.pow(x, n);
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Nhap mot x n: ");
		int n, x;
		Scanner s = new Scanner(System.in);
		try {
			x = Integer.parseInt(s.nextLine());
			n = Integer.parseInt(s.nextLine());
			System.out.print("T(x,n) = ");
			System.out.format("%d", tong(n, x));
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
