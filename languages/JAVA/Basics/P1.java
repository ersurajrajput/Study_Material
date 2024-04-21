// Write a Java program to find the factorial of a number using recursion.
import java.util.Scanner;
public class P1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number :-\t  ");
        int n = sc.nextInt();
        P1 myOP1 = new P1();
        int f = myOP1.fact(n);
        System.out.println(f);
        
        
        
    }


    public int fact(int n){
        if (n>0) {
            return (n *fact(n-1));
            
        }
        else {
            return 1;
        }



       

    }
}

