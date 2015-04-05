// Problem: 18520. Tomadas (http://br.spoj.com/problems/TOMADA13/)

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);

    int t1 = s.nextInt();
    int t2 = s.nextInt();
    int t3 = s.nextInt();
    int t4 = s.nextInt();

    t1--;
    t2--;
    t3--;

    System.out.println(t1 + t2 + t3 + t4);
  }
}
