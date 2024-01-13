
// simple intrest calculator
import java.util.Scanner;

public class P3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the amount ");
        int amount = sc.nextInt();
        System.out.println("enter the Time(in months) ");
        int Time = sc.nextInt();
        System.out.println("enter the Rate(%) ");
        int Rate = sc.nextInt();
        SimpleInterest(amount, Time, Rate);

    }

    public static void SimpleInterest(int amount, int time, int Rate) {
        int Interest = (amount * time * Rate) / 100;
        System.out.println("intrest:-" + Interest);
        System.out.println("Total:-" + (Interest + amount));

    }

}
