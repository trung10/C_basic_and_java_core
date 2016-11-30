import java.util.Scanner;


public class demo {

	/**
	 * @param args
	 */
	
	public static int tongNsotunhiendautien(int n){
		if (n<4||n>49) {
			return 0;
		}else {
			int tong = 0;
			for(int i=0; i<=n;i++){
				tong += i;
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
			System.out.println("1+2+...+"+n+"="+tongNsotunhiendautien(n));
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
