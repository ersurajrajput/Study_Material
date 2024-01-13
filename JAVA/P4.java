// area of tiangle calculator

import java.util.Scanner;
public class P4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter value of base");
        int base = sc.nextInt();
        System.out.println("enter value of height");
        int height = sc.nextInt();
        System.out.println("AREA of TRIANGLE is :- "+area(base, height));
        
    }
    public static int area(int base, int height) {
        return ((base*height)/2);
        
    }
    
}
