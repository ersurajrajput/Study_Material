//binary and linear search
import java.util.Scanner;

public class Searching {
    int x[] = {1,2,5,6,7,8,9,10,12,13,14,15,16,17,18,19,20,21,23,25,26,27,28,29,30,34,35,36,37,38,39,40,55,99,100};


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Searching sc = new Searching();
        int ub=sc.x.length;
        System.out.println(ub);
        System.out.println("enter the element that you want to find:---");
        int data = scan.nextInt();
        int location = sc.BFind(data,ub-1,0);
        System.out.println("location "+location);
        if (location == -1) {
            System.out.println("Element not found");
            
        }
        else {
            System.out.println("Element :- "+data+" Found at Location:-- "+location);
        }
        
    }
    public int BFind(int data,int UB,int LB){
        
       
        int mid =  (UB +LB) /2;
        //System.out.println("mid = "+mid);
        if (x[mid] == data) {
            System.out.println("mid = "+x[mid]+1);
      
            return mid;
           
            
        }
        else if (x[mid] > data){
         
           mid= BFind(data, mid, LB);
            
        }
        else if (x[mid] < data) {
            
           mid= BFind(data, UB, mid);
            
        }
        return -1;
        
    }
}



