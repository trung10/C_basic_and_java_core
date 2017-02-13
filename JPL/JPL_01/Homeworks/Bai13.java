import java.util.Scanner;


public class demo {

	/**
	 * @param args
	 */
	
	public static int tong(int n, int x){
		int tong = 0;
		if(n<1){
			return -1;
		}
		else {
			for (int i = 1; i <= n; i++) {
				tong += Math.pow(x, 2*i);
				}
			}
			return tong;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("S(x,n) nhap x n: ");
		int n, x;
		Scanner s = new Scanner(System.in);
		try {
			x = Integer.parseInt(s.nextLine());
			n = Integer.parseInt(s.nextLine());
			System.out.print("Tong = ");
			System.out.format("%d", tong(n, x));
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
