// 2242 - Huaauhahhuahau (https://www.urionlinejudge.com.br/judge/pt/problems/view/2242)

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		String s = r.readLine().toLowerCase();
		List<Character> l = new ArrayList<>(s.length());

		for(int i = 0; i < s.length(); i++) {
			char charAt = s.charAt(i);

			if(charAt == 'a' || charAt == 'e' || charAt == 'i' || charAt == 'o' || charAt == 'u') {
				l.add(charAt);
			}
		}

		boolean b = true;
		for(int i = 0, j = l.size() - 1; i < j; i++, j--) {
			if(l.get(i) != l.get(j)) {
				b = false;
				break;
			}
		}


		System.out.println(b ? "S" : "N");
	}

}
