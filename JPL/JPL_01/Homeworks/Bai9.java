import java.util.Scanner;


public class demo {

	/**
	 * @param args
	 */
	
	public static int tong(int n){
		if (n<7) {
			return -1;
		}else {
			int tong = 1;
			for(int i=1; i<=n;i++){
				tong *= i;
			}
			return(tong);
		}
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Nhap mot so nguyen: ");
		int n;
		Scanner s = new Scanner(System.in);
		try {
			n = Integer.parseInt(s.nextLine());
			System.out.print("Sum = ");
			System.out.format("%d", tong(n));
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
