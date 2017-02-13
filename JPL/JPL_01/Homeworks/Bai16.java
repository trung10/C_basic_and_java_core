import java.util.Scanner;



public class demo {

	/**
	 * @param args
	 */
	
	public static void uoc(int n){
		if (n<1) {
			System.out.println("Error");
		}else{
			System.out.format("1%3d",n);
		for (int i = 2; i <= n/2; i++) {
			if (n%i==0) {
				System.out.format("%3d",i);
			}
		}
		}
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Nhap n: ");
		int n;
		Scanner s = new Scanner(System.in);
		try {
			n = Integer.parseInt(s.nextLine());
			uoc(n);
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
