import java.util.*;
public class QueueStack {
  public static void main (String args[]) {
    Queue<Integer> q = new LinkedList<>();
    q.add(3);
    q.add(2);
    q.add(1);
    while( ! q.isEmpty() ) 
      System.out.print(q.poll()+" ");
    System.out.println();
    var st = new Stack<Integer>();
    st.push(3);
    st.push(2);
    st.push(1);
    while (! st.empty()) 
      System.out.print(st.pop()+" ");
    System.out.println();
  }
}
