// Problem: 19964. Telefone (http://br.spoj.com/problems/TEL8/)
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    String str = s.next();

    str = str.replaceAll("[ABC]", "2");
    str = str.replaceAll("[DEF]", "3");
    str = str.replaceAll("[GHI]", "4");
    str = str.replaceAll("[JKL]", "5");
    str = str.replaceAll("[MNO]", "6");
    str = str.replaceAll("[PQRS]", "7");
    str = str.replaceAll("[TUV]", "8");
    str = str.replaceAll("[XWYZ]", "9");

    System.out.println(str);
  }
}
