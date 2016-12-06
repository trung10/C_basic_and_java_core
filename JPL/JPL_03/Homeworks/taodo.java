import java.util.Scanner;

public class toado {
	private float a, b;
	Scanner s = new Scanner(System.in);

	public toado() {
		// TODO Auto-generated constructor stub
		System.out.println("Diem(a , b) nhap a, b: ");
		this.a = Float.parseFloat(s.nextLine());
		this.b = Float.parseFloat(s.nextLine());
	}

	public void gettaodo() {
		System.out.println("diem(" + a + ", " + b +")");
	}

	public static float khoangcanh(toado diem1, toado diem2) {
		return (float) Math.sqrt((float)Math.pow((diem1.a-diem2.a), 2) + (float)Math.pow((diem1.b-diem2.b), 2));
	}
	
	public static toado isxatamnhat(toado diem1, toado diem2){
		if (Math.sqrt(diem1.a*diem1.a+diem1.b*diem1.b) > Math.sqrt(diem2.a*diem2.a+diem2.b*diem2.b)) {
			return diem1;
		}
		return diem2;
	}
}


public class main {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		toado diem1 = new toado();
		toado diem2 = new toado();
		
		diem1.gettaodo();
		diem2.gettaodo();
		
		toado xanhat = toado.isxatamnhat(diem1, diem2);
		System.out.println("khoang canh " + toado.khoangcanh(diem1, diem2) + ". Diem xa nhat diem:");
		xanhat.gettaodo();
	}

}
