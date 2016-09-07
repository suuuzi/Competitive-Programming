// 1708 - Volta (https://www.urionlinejudge.com.br/judge/pt/problems/view/1708

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		String[] l = r.readLine().split(" ");
		int a = Integer.parseInt(l[0]);
		int b = Integer.parseInt(l[1]);
		int c = b / (b - a);
		
		System.out.println((b % (b - a) == 0) ? c : c + 1);
	}

}
