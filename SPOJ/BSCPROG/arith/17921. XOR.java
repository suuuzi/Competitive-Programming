// Problem: 17921. XOR (http://www.spoj.com/BSCPROG/problems/BSCXOR/)


import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);

    int p = s.nextInt();
    int r = s.nextInt();

    System.out.println(p ^ r);
  }
}
