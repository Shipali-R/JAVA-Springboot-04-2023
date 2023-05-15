import java.io.IOException;

public class Entry {
	public static void main(String[] args) throws IOException {
		
		Menu menu = new Menu();
		int ch= menu.showMenu();
				
		System.out.println("Please enter the first number");
		int number1 = BasicInput.readInteger();
		
		System.out.println("Please enter the second number");
		int number2 = BasicInput.readInteger();
		
		Maths m = new Maths();
		
		if (ch == 1) {
			m.add(number1, number2);
		}
		else if (ch == 2) {
			m.subtract(number1, number2);
		}
		else if (ch == 3) {
			m.multiply(number1, number2);
		}
		else if (ch == 4) {
			m.division(number1, number2);
		}
		
		menu.thankU();
		
//		byte b[] = new byte[255];
//		System.out.println("Please enter 1st number");
//		int length = System.in.read(b);
//		byte bt[] = new byte[length-2];
//		System.arraycopy(b, 0, bt, 0, length-2); //Function called without creating object(static function)
//		String s = new String(bt);
//		
//		int number = Integer.parseInt(s); //Wraper class
//		System.out.println(number);
		//System.out.println("The number is "+ s);		
		//System.out.println("The length is "+s.length());		
		
//		The second way to find out length of the string is through read function.
//		int length = System.in.read(b);
//		System.out.println("The length of the string is "+length);
//		System.out.println(b);		
		
//		One way of finding length of string. Its gives us value as 255.
//		System.in.read(b);
//		System.out.println(b);
//		//Converting the byte input to string.
//		String s = new String(b);
//		System.out.println("The number is "+ s);		
//		System.out.println("The length of the string is "+s.length());

//		System.out.println("My Calculator\n");		
//		int a = 100;
//		int b = 20;
//		Maths m= new Maths();
//		m.add(a,b);
//		m.subtract(a,b);
//		m.multiply(a,b);
//		m.division(a, b);
//		m.square(a);
//		m.cube(a);
//		
	}
}
