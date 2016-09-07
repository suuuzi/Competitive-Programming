// 1709 - Baralho Embaralhado (https://www.urionlinejudge.com.br/judge/pt/problems/view/1709)

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	static int p = 0, n = 0;
	public static void main(String[] args) throws Exception {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(r.readLine());
		p = 1;
		
		int i = 0;
		do {
			int j = n / 2;
			p = (p <= j) ? p * 2 : n - ((n - p + 1) * 2) + 1;
			i++;
		} while(p != 1);
		System.out.println(i);

	}

}
