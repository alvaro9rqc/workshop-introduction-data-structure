import java.util.*;
public class LinkedLists {
  public static void main (String args[]) {
    var lk = new LinkedList<Integer>();
    lk.addLast(4);    //inserción al final
    lk.addLast(3);                          
    lk.addFirst(2);   //inserción al inicio
    lk.addFirst(1);
    System.out.println(lk.get(2)); //acceso lineal
    int idx = lk.indexOf(3); //búsqueda
    lk.remove(idx); //eliminación
    for(var e: lk) {
      System.out.print(e + " ");
    }
    System.out.println();
  }
}
