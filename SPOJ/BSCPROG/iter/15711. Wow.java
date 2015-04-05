// Problem: 15711. Wow (http://www.spoj.com/BSCPROG/problems/SMPWOW/)

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);

    int p = s.nextInt();
    String output = "W";

    for(int i = 0; i < p; i++){
      output += "o";
    }

    output += "w";

    System.out.println(output);
  }
}
