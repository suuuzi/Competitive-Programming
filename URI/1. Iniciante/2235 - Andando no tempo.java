// 2235 - Andando no Tempo (https://www.urionlinejudge.com.br/judge/pt/problems/view/2235)
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		String s = r.readLine().toLowerCase();
		String[] values = s.split(" ");

		int a = Integer.parseInt(values[0]);
		int b = Integer.parseInt(values[1]);
		int c = Integer.parseInt(values[2]);

		if((a - b == 0) || (a - c == 0) || (b - c == 0) || (a + b - c ==0) || (a + c - b == 0) || (b + c - a == 0)) {
			System.out.println("S");
		} else {
			System.out.println("N");
		}
	}

}
