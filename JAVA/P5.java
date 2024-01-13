// even or odd


import java.util.Scanner;
public class P5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter a number");
        int no = sc.nextInt();
        if (no%2 == 0) {
            System.out.println("even");
            
        }
        else{
            System.out.println("odd");
        }
        
    }
}
