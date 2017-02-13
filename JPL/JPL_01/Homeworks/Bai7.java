import java.util.Scanner;


public class demo {

	/**
	 * @param args
	 */
	
	public static double tong(int n){
		if (n<1) {
			return -1;
		}else {
			double tong = 0;
			for(int i=1; i<=n;i++){
				tong += (double)(i)/(double)(i+1);
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
			System.out.print("S = ");
			System.out.format("%.5f", tong(n));
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
