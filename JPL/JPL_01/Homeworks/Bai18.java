import java.util.Scanner;



public class demo {

	/**
	 * @param args
	 */
	
	public static void demuoc(int n){
		int dem=0, le = 0, chan = 0;
		if (n<1) {
			System.out.println("Error");
		}else{
		for (int i = 1; i <= n; i++) {
			if (n%i==0) {
				dem++;
				if (i%2==0) {
					chan++;
				}else {
					le++;
				}
			}
		}
		System.out.println(n+" co: "+dem+" Uoc, "+le+" uoc le, "+chan+" uoc chan");
		}
		
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Nhap n: ");
		int n;
		Scanner s = new Scanner(System.in);
		try {
			n = Integer.parseInt(s.nextLine());
			demuoc(n);
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
