
public class Entry {
	public static void main(String[] args) {
		
		System.out.println("My Calculator\n");
		
		int a = 100;
		int b = 20;
		
		Maths m= new Maths();
		m.add(a,b);
		m.subtract(a,b);
		m.multiply(a,b);
		m.division(a, b);
		m.square(a);
		m.cube(a);
		
	}
}
