import java.sql.Date;
import java.util.Scanner;




public class demo {

	/**
	 * @param args
	 */
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		double toan, ly, hoa;
		String ten, ma;
		Scanner s = new Scanner(System.in);
		try {
			System.out.println("Nhap ten: ");
			ten = s.nextLine();
			System.out.println("Nhap ma hs: ");
			ma = s.nextLine();
			System.out.println("Nhap diem toan ly hoa: ");
			toan = Double.parseDouble(s.nextLine());
			ly = Double.parseDouble(s.nextLine());
			hoa = Double.parseDouble(s.nextLine());
			System.out.println(ten+" "+ma+" "+" diem trung binh "+(double)(toan+ly+hoa)/3);
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
