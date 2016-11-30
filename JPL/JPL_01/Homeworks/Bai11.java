import java.util.Scanner;


public class demo {

	/**
	 * @param args
	 */
	
	public static int tong(int n){
		int tong = 1;
		if(n==1){
			return 1;
		}else if (n<1) {
			return -1;
		}
		else {
			for (int i = 2; i <= n; i++) {
				int s = 1;
				for (int j = 1; j <= i; j++) {
					 s *= j; 
				}
				tong += s;
			}
			return tong;
		}
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Nhap mot so nguyen duong: ");
		int n;
		Scanner s = new Scanner(System.in);
		try {
			n = Integer.parseInt(s.nextLine());
			System.out.print("Tong = ");
			System.out.format("%d", tong(n));
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
