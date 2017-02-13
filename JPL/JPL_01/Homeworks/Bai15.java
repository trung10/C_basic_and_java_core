import java.util.Scanner;


public class demo {

	/**
	 * @param args
	 */
	
	public static int gt(int n){
		int tong = 1;
		if(n==0){
			return 1;
		}else if (n<0) {
			return -1;
		}
		else {
			for (int i = 1; i <= n; i++) {
				tong *= i;
				}
			}
			return tong;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("n! nhap n: ");
		int n;
		Scanner s = new Scanner(System.in);
		try {
			n = Integer.parseInt(s.nextLine());
			System.out.print("n! = ");
			System.out.format("%d", gt(n));
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
