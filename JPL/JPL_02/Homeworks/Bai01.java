import java.util.Scanner;




public class demo {

	/**
	 * @param args
	 */
	
	public static void show(double arr[]){
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + "\t");
		}
		System.out.println();
	}
	public static void showSoAm(double arr[]){
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] < 0) {
				System.out.print(arr[i] + "\t");
			}

		}
		System.out.println();
	}
	public static int demSoDuong(double arr[]){
		int dem = 0;
		for (int i = 0; i < arr.length; i++) {
			if (arr[i]>0) {
				dem++;
			}
		}
		return dem;
	}
	public static double timMax(double arr[]){
		double max;
		max = arr[0];
		for (int i = 1; i < arr.length; i++) {
			if (arr[i] > max) {
				max = arr[i];
			}
		}
		return max;
	}
	public static double timMin(double arr[]){
		double min;
		min = arr[0];
		for (int i = 1; i < arr.length; i++) {
			if (arr[i] < min) {
				min = arr[i];
			}
		}
		return min;
	}
	
	public static double timSoAmLN(double arr[]){
		double maxAm = 0;
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] < 0) {
				maxAm = arr[i];
				if (arr[i] > maxAm) {
					maxAm = arr[i];
				}
			}
		}
		return maxAm;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		double arr[];
		int n;

		Scanner s = new Scanner(System.in);
		try {
			System.out.println("Nhap so phan tu cua day");
			n = Integer.parseInt(s.nextLine());
			arr = new double[n];
			for (int i = 0; i < arr.length; i++) {
				System.out.println("Nhap phan tu thu "+(i+1)+": ");
				arr[i] = Double.parseDouble(s.nextLine());
			}
			show(arr);
			showSoAm(arr);
			System.out.format("So luong so duong: %d, min = %.3f, max = %.3f%n", demSoDuong(arr), timMin(arr), timMax(arr));
			if (timSoAmLN(arr) != 0) {
				System.out.format("So am lon nhat: %.3f%n", timSoAmLN(arr));
			}
			
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
