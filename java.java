import java.util.InputMismatchException;
import java.util.Scanner;

public class java {
    public static void main(String[] args) {
        final Scanner scan = new Scanner(System.in);
        System.out.print("What is your age? ");
        int age;
        
        try {
            age = scan.nextInt();
        } catch (InputMismatchException stupid) {
            System.out.println("Input must be a number");
            scan.close();
            return;
        }
        
        scan.close();
    
        if (age < 15) {
            System.out.println("Sorry, you cannot watch this film");
        } else {
            System.out.println("You are old enough to watch this film!");
        }
    }
}
