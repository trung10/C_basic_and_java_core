import java.util.Scanner;



public class demo {

	/**
	 * @param args
	 */
	
	public static  void kt(int a){
		for (int i = 1; i <= a; i++) {
			if (i%2!=0) {
				if ((i!=7&&i!=21&&i!=49)) {
					System.out.println(i+" ");
				}
			}
		}
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Enter a integer: ");
		int a;
		Scanner s = new Scanner(System.in);
		try {
			a = Integer.parseInt(s.nextLine());
			kt(a);
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
