// public class main {

//     public static void main(String[] args) {
//         int arr[] = { 1, 2, 3, 4 }; // local variable   
//         int sum = sum(15, 20);

//         System.out.println(sum);
//         System.out.println(arr[3]);

//         // this is single line comment
//         /*
//          * this is
//          * multi line comment
//          */

//     }

//     public static int sum(int a, int b) {

//         return a + b;

//     }

// }

/// exercise 1
import java.util.Scanner;  // Import the Scanner class

class main {
  public static void main(String[] args) {
    Scanner myObj = new Scanner(System.in);  // Create a Scanner object
    System.out.println("Enter your age");

    int age = myObj.nextInt();  // Read user input
    if (age>18) {
      System.out.println("you can vote");
    }
    else if (age ==18) {
      System.out.println("please wait for next year");

    }
    else{
      System.out.println("sorry you can't vote now (you are minor)");
    }
    System.out.println("ag  is: " + age);  // Output user input
  }
}