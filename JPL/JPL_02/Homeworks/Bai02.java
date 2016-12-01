import java.util.Scanner;




public class demo {

	/**
	 * @param args
	 */
	
	public static void show(int arr[]){
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + "\t");
		}
		System.out.println();
	}
	
	public static int tong(int arr[]){
		int dem = 0;
		for (int i = 0; i < arr.length; i++) {
			if (arr[i]>0) {
				dem += arr[i];
			}
		}
		return dem;
	}
	
	public static int demSoLe(int arr[]){
		int dem = 0;
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] % 2 == 1) {
				dem++;
			}
		}
		return dem;
	}
	public static boolean ktSoAm(int arr[]){
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] < 0) {
				return true;
			}
		}
		return false;
	}
	
	public static boolean ktToanChan(int arr[]){
		for (int i = 0; i < arr.length; i++) {
			if (arr[i] % 2 != 0) {
				return false;
			}
		}
		return true;
	}
	 public static void swapArray(int arr[], int i, int j){
	        int temp = arr[i];
	        arr[i] = arr[j];
	        arr[j] = temp;
	    }
	public static void sapXep(int arr[]){
		for (int i = 0; i < arr.length-1; i++) {
			for (int j = i+1; j < arr.length; j++) {
				if (arr[j]<arr[i]) {
					swapArray(arr, i, j);
				}
			}
		}
	}
	
	public static void sapXepChanLe(int arr[]){
		for (int i = 0; i < arr.length-1; i++) {
			if (arr[i] % 2 == 0) {
				for (int j = i+1; j < arr.length; j++) {
					if (arr[i] % 2 == 0) {
						if (arr[j]<arr[i]) {
							swapArray(arr, i, j);
						}	
					}
				}
			}else {
				for (int j = i+1; j < arr.length; j++) {
					if (arr[i] % 2 != 0) {
						if (arr[j]>arr[i]) {
							swapArray(arr, i, j);
						}	
					}
				}
			}
		}
	}

	public static boolean nt(int n){
	    if(n<2){
	        return false;
	    }
	    for(int i=2; i <= Math.sqrt(n); i++){
	        if(n % i == 0){
	            return false;
	        }
	    }
	    return true;
	}
	
	public static boolean ktNT(int arr[]){
		for (int i = 0; i < arr.length; i++) {
			if (nt(arr[i])) {
				return true;
			}
		}
		return false;
	}
	
	public static int demNT(int arr[]){
		int dem = 0;
		for (int i = 0; i < arr.length; i++) {
			if (nt(arr[i])) {
				dem++;
			}
		}
		return dem;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int arr[];
		int n;

		Scanner s = new Scanner(System.in);
		try {
			System.out.println("Nhap so phan tu cua day");
			n = Integer.parseInt(s.nextLine());
			arr = new int[n];
			for (int i = 0; i < arr.length; i++) {
				System.out.println("Nhap phan tu thu "+(i+1)+": ");
				arr[i] = Integer.parseInt(s.nextLine());
			}
			show(arr);
			System.out.println("Tong = "+tong(arr)+ " co "+demSoLe(arr)+" so le");
			if (ktSoAm(arr)) {
				System.out.println("Mang co phan tu am");
			}
			if (ktToanChan(arr)) {
				System.out.println("Mang toan chan");
			}
			if (ktNT(arr)) {
				System.out.println("Co " + demNT(arr) + " so nguyen to");
			}
			System.out.println("Sap xep chan tang le giam");
			sapXepChanLe(arr);
			show(arr);
			System.out.println("Sap xep tang dan");
			sapXep(arr);
			show(arr);
			System.out.println(nt(arr[0]));
		} catch (Exception e) {
			System.err.println("Error: "+ e.getMessage());
		}
		s.close();
	}

}
