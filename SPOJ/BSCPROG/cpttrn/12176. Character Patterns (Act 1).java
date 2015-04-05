//Problem: 12176. Character Patterns (Act 1) (http://www.spoj.com/BSCPROG/problems/CPTTRN1/)

import java.util.Scanner;

public class Main {

  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);

    int p = s.nextInt();

    for(int i = 0; i < p; i++){
      int linhas = s.nextInt();
      int colunas = s.nextInt();

      for(int j = 0; j < linhas; j++){
        String strLinha = "";
        for(int k = 0; k < colunas; k++){
          if(j % 2 == 0){
          if(k % 2 == 0){
            strLinha += "*";
          } else {
            strLinha += ".";
          }
          } else {
          if(k % 2 == 0){
            strLinha += ".";
          } else {
            strLinha += "*";
          }
          }
        }
        System.out.println(strLinha);
      }

      System.out.println("\n");
    }
  }
}
