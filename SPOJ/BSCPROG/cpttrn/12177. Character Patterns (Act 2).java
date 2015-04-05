// Problem: 12177. Character Patterns (Act 2) (http://www.spoj.com/BSCPROG/problems/CPTTRN2/)

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
          if(k == 0 || j == 0 || k == colunas - 1 || j == linhas - 1){
            strLinha += "*";
          } else {
            strLinha += ".";
          }
        }
        System.out.println(strLinha);
      }

      System.out.println("\n");
    }  
  }
}
