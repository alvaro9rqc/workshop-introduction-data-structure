import java.util.*;
public class DinamicArray {
  public static void main (String args[]) {
    var v = new ArrayList<Integer>();
    v.add(1);
    v.add(2);
    v.add(3);
    System.out.println(v.get(2));
    v = new ArrayList<>(Arrays.asList(
          new Integer[]{1,2,3,4,5,6,7}
          ));
    v.set(0, v.get(6)); //acceso
    int idx = v.indexOf(5); //búsqueda
    v.remove(idx); //eliminación
    Collections.sort(v);
    for(var e:v) 
      System.out.print(e + " ");
    System.out.println();

  }
}

