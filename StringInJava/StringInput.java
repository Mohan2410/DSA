import java.util.Scanner;
public class StringInput {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a first string: ");
        String s = sc.nextLine();
        System.out.println("The first string is: "+s);

        System.out.println("Enter a second string: ");
        String m = sc.nextLine();
        System.out.println("The second string is: "+m);

        System.out.println(s+ " " +m);
    }
}