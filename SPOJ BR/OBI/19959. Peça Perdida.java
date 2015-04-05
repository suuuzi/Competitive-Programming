// Problem: 19959. Peça Perdida (http://br.spoj.com/problems/PECA7/

import java.util.Scanner;
public class Main {

  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);

    int qtd = s.nextInt();
    int n[] = new int[qtd+1];


    for(int i = 0; i < qtd-1; i++){
      int num = s.nextInt();
      n[num] = 1;
    }

    int numero = 0;
    boolean achou = false;
    while(!achou){
      numero++;
      if(n[numero] == 0){
        achou = true;
      }
    }
    System.out.println(numero);
  }
}
