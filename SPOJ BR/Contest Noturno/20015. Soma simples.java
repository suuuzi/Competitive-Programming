// Problem: 20015. Soma simples (http://br.spoj.com/problems/SOMASI/)

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {

    Scanner s = new Scanner(System.in);
    int p = s.nextInt();

    for(int i = 0; i < p; i++){
      String a = s.next();
      String b = s.next();

      int aa = Integer.parseInt(a.substring(a.length() - 1, a.length()));
      int bb = Integer.parseInt(b.substring(b.length() - 1, b.length()));

      System.out.println((aa + bb) % 2 == 0 ? "Par" : "Impar");
    }
  }
}
