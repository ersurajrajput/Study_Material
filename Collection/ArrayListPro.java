import java.util.*;
class ArrayListPro {
public static void main(String[] args) {
    List<Integer> al = new ArrayList<>();
    //use when ordered collection required, duplicates are allowed.

    Stack<Integer> st = new Stack<>();
    Stack<Integer> st1 = new Stack<>();
    st.add(1);
    st.add(2);
    st.add(3);
    st.add(4);
    st.add(5);
    st.add(6);
    st1.addAll(st.reversed());

    System.out.println(st);
    System.out.println(st1);



    
   
}
    
}