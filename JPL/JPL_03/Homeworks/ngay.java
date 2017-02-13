public class Ngay {

	private int ngay, thang, nam;

	public Ngay(int ngay, int thang, int nam) {
		this.ngay = ngay;
		this.thang = thang;
		this.nam = nam;
	}

	public void xuat() {
		System.out.println(this.ngay + " " + this.thang + " " + this.nam);
	}

	public boolean isnamnhan() {
		if ((nam % 4 == 0) && (nam % 100 != 0)) {
			return true;
		}
		if (nam % 400 == 0) {
			return true;
		}
		return false;
	}

	public boolean isngay() {
		int[] ngaythang = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (ngay > ngaythang[thang - 1])
			return false;
		return true;
	}

	public Ngay ngaysau() {

		int ngaythang[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (isnamnhan()){
			ngaythang[1] = 29;
		}
		ngay++;
		if (ngay > ngaythang[thang - 1]) {
			thang++;
			ngay = 1;

			if (thang > 12) {
				thang = 1;
				nam++;
			}
		}
		Ngay sau = new Ngay(ngay, thang, nam);
		return sau;
	}

	public Ngay ngaytruoc() {
		int ngaythang[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (isnamnhan()) {
			ngaythang[1] = 29;
		}
		ngay--;
		if (ngay < 1) {
			thang--;
			ngay = ngaythang[thang - 1];
			if (thang < 1) {
				thang = 12;
				nam--;
				ngay = 31;
			}
		}
		Ngay truoc = new Ngay(ngay, thang, nam);
		return truoc;
	}
	public void quy(){
		if ((thang == 1) || (thang == 3) || (thang == 2)) {
			System.out.println("Quy 1");
		}else if ((thang<7)&&(thang>3)) {
			System.out.println("Quy 2");
		}else if ((thang<10)&&(thang>6)) {
			System.out.println("Quy 3");
		}else {
			System.out.println("Quy 4");
		}
	}
	
	public Ngay ngaytruocK(int k) {
		Ngay a = null;
		for (int i = 1; i <= k; i++) {
			a = ngaytruoc();
		}
		return a;
	}
	
	public Ngay ngaysauK(int k) {
		Ngay a = null;
		for (int i = 1; i <= k; i++) {
			a = ngaysau();
		}
		return a;
	}
	
	public int ngaytoidatrongthang(){
		int ngaythang[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (isnamnhan()){
			ngaythang[1] = 29;
		}
		return ngaythang[thang - 1];
	}
}


public class main {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Ngay ngay = new Ngay(1, 6, 2016);

		ngay.xuat();

		System.out.println("la nam nhuan? " + ngay.isnamnhan());
	
		System.out.println("Ngay toi da trong thang " + ngay.ngaytoidatrongthang());
		
		Ngay ngaytruoc = ngay.ngaytruoc();
		ngaytruoc.xuat();
		
		Ngay ngaysau = ngay.ngaysau();
		ngaysau.xuat();
		
		Ngay ngaysauk = ngay.ngaysauK(8);
		ngaysauk.xuat();
		
		Ngay ngaytruock = ngay.ngaytruocK(8);
		ngaytruock.xuat();
	}

}
