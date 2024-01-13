
// prime no
import java.util.Scanner;

public class P6 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int ch;
        System.out.println("enter 1 to chack prime\n enter 2 for find prime");
        ch = sc.nextInt();
        if (ch == 1) {
            chack();
        }
        else if(ch==2){
            find();
        }
        else {
            System.out.println("incorrect choice");
        }

    }
    public static void find() {
        Scanner sc = new Scanner(System.in);
        int number;
        System.out.println("enter number");
        number = sc.nextInt();
        if (number == 0) {
            System.out.println("sorry you entered 0");
        }
        else if (number == 1) {
            System.out.println("sorry you entered 1");
        }
        else if (number == 2) {
            System.err.println(number);
            
        }
        else{
            for(int i=2;i<=number/2; i++){
                int flag =0;
                for(int j=2; j<=i/2;j++){
                    
                    if (i%j == 0) {
                        flag = 1;
                        break;
                        
                    }

                }
                if (flag == 0) {
                    System.out.print(i+"\t");
                    
                }
                
            }
        }

        
    }

    public static void chack() {
        Scanner sc = new Scanner(System.in);
        int flag = 0;

        System.out.println("enter a number");
        int number = sc.nextInt();
        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            System.out.println("number is prime");

        } else {
            System.out.println("number is not prime");
        }
    }
}
