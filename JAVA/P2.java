// sum of two numbers

import java.util.Scanner; 
public class P2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter number 1");
        int num1 = sc.nextInt();
        System.out.println("enter number 2");
        int num2 = sc.nextInt();
        System.out.println(sum(num1,num2));
        
    }
    public static int sum(int a, int b){
        return (a+b);
    }
    
}
