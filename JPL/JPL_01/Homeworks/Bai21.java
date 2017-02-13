import java.util.Scanner;



public class demo {

	/**
	 * @param args
	 */
	
	public static int UCLN(int a, int b){
        a = Math.abs(a); 
        b = Math.abs(b);            
        if (a==0 ||b==0)
            return a+b;
        while (a!=b)
        {
            if(a>b)
                a=a-b;
            else
                b=b-a;
        }
        return a;
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Enter a, b: ");
		int a, b;
		Scanner s = new Scanner(System.in);
		try {
			a = Integer.parseInt(s.nextLine());
			b = Integer.parseInt(s.nextLine());
			System.out.println("Greatest common divisor\n"+ UCLN(a, b));
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
