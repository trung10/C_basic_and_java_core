import java.util.Scanner;



public class demo {

	/**
	 * @param args
	 */
	
	public static boolean kt(int a){
		if (a%400==0) {
			return true;
		}
		if ((a%4==0)&&(a%100!=0)) {
			return true;
		}
		return false;
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Enter a year: ");
		int a;
		Scanner s = new Scanner(System.in);
		try {
			a = Integer.parseInt(s.nextLine());
			System.out.println("Is "+a+ " leap year?\n"+kt(a));
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
