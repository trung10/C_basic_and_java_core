import java.util.Scanner;


public class demo {

	/**
	 * @param args
	 */
	
	public static int tong(int n){
		if (n<5||n>20) {
			return -1;
		}else {
			int tong = 0;
			for(int i=1; i<=n;i++){
				tong += Math.pow(i, 2);
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
			System.out.println("1*1+2*2+...+"+n+"*"+n+"="+tong(n));
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
