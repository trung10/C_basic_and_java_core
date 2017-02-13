import java.util.Scanner;



public class demo {

	/**
	 * @param args
	 */
	
	public static boolean kt(int n){
	    int i;
	    if(n<2){
	        return false;
	    }
	    for(i=2; i<Math.sqrt(n);i++){
	        if(n%i==0){
	            return false;
	        }
	    }
	    return true;
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Nhap n: ");
		int n;
		Scanner s = new Scanner(System.in);
		try {
			n = Integer.parseInt(s.nextLine());
			System.out.println("Is n Prime number\n"+ kt(n));
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
