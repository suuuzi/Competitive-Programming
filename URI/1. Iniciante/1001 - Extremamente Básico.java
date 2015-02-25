// Problem: 1001 - Extremamente Básico (https://www.urionlinejudge.com.br/judge/pt/problems/view/1001)

import java.io.IOException;
import java.io.InputStreamReader;
import java.io.BufferedReader;
/**
 * IMPORTANT:
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {

    public static void main(String[] args) throws IOException {
        int a = 0, b = 0;

        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        a = Integer.parseInt(in.readLine());
        b = Integer.parseInt(in.readLine());

        System.out.println("X = " + (a + b));
    }

}
