//pelindrom

import java.util.Scanner;

public class P8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter a number");
        int number = sc.nextInt();
        int pelindrom = 0,rem=0;

        for (int i=number; i>0; i/=10){
            rem = i % 10;
            pelindrom=(pelindrom*10)+rem;
        }
        if (number == pelindrom) {
            System.out.println("number is plendrom");
        }
        else{
            System.out.println("number is not pelendrom");
        }
    }
    
}
