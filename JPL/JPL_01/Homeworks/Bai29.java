import java.sql.Date;
import java.util.Scanner;




public class demo {

	/**
	 * @param args
	 */
	
	@SuppressWarnings("deprecation")
	public static int kt(int a){
		Date d = new Date(System.currentTimeMillis());
		return d.getYear()+1900-a;
	}
	
	
	@SuppressWarnings("deprecation")
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		String ten;
		int ngay, thang, nam;
		Date d;
		Scanner s = new Scanner(System.in);
		try {
			System.out.println("Nhap ten: ");
			ten = s.nextLine();
			System.out.println("Nhap ngay sinh: ");
			ngay = Integer.parseInt(s.nextLine());
			thang= Integer.parseInt(s.nextLine());
			nam = Integer.parseInt(s.nextLine());
			d = new Date(nam, thang, ngay);
			System.out.println(ten+" "+"Tuoi "+kt(d.getYear()));
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
