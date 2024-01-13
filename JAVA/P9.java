import java.util.Scanner;
class P9{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int sum=0,sub;
        System.out.println("<------------------NO OF SUBJECT ----------------->");
        sub = sc.nextInt();
        for (int i = 0; i<sub;i++){
            System.out.println("enter number of Subject"+(i+1));
            sum = sum +sc.nextInt();
        }
        System.out.println("Avrage marks is"+(sum/sub));


    }
}