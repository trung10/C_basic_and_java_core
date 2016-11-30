import java.util.Scanner;




public class demo {

	/**
	 * @param args
	 */
	
	public static double tinh(double a, double b){
		return a*b;
	}
	public static double chia(double a, double b){
		return a/b;
	}
	public static double cong(double a, double b){
		return a+b;
	}
	public static double tru(double a, double b){
		return a-b;
	}
	public static double laydu(double a, double b){
		return a%b;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		double a, b;

		Scanner s = new Scanner(System.in);
		try {
			System.out.println("Nhap 2 so thuc a, b: ");
			a = Double.parseDouble(s.nextLine());
			b = Double.parseDouble(s.nextLine());
			System.out.println("Tong: "+cong(a, b)+" Tinh: "+tinh(a, b)+" Hieu: "+tru(a, b)+" Thuong: "+chia(a, b)+" Lay du: "+laydu(a, b));
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
