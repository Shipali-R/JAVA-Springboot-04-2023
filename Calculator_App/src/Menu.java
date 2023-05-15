import java.io.IOException;

public class Menu {
	
	public int showMenu() throws IOException {
		System.out.println("Please select the number beside the operation to be performed");
		System.out.println("1. Addition");
		System.out.println("2. Multiplication");
		System.out.println("3. Subtraction");
		System.out.println("4. Division");
//		System.out.println("5. Square of the number");
//		System.out.println("6. Cube of the number");
		int choice = BasicInput.readInteger();
		
		return choice;
		
	}
	
	public void thankU() {
		System.out.println("Happy to help you with Math");
	}

}
