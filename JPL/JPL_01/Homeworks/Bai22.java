import java.util.Scanner;



public class demo {

	/**
	 * @param args
	 */
	
	public static int BCNN(int a, int b){
        a = Math.abs(a); 
        b = Math.abs(b);            
        if (a > b){
        	int i = 1;
	        while ((a*i)%b!=0){
	        i++;
	        }
	        return a*i;
        }
        else 
        	return BCNN(b,a);
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Enter a, b: ");
		int a, b;
		Scanner s = new Scanner(System.in);
		try {
			a = Integer.parseInt(s.nextLine());
			b = Integer.parseInt(s.nextLine());
			System.out.println("Least common multiple\n"+ BCNN(a, b));
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
