// 2246 - Ladrilhos (https://www.urionlinejudge.com.br/judge/pt/problems/view/2246)

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		String[] s = r.readLine().split(" ");

		int alt = Integer.parseInt(s[0]);
		int larg = Integer.parseInt(s[1]);
		int v[][] = new int[alt][larg];

		for (int i = 0; i < alt; i++) {
			String l[] = r.readLine().split(" ");
			for (int j = 0; j < l.length; j++) {
				v[i][j] = Integer.parseInt(l[j]);
			}
		}

		int rr = Integer.MAX_VALUE;
		boolean[][] visited = new boolean[alt][larg];

		for (int i = 0; i < alt; i++) {
			for (int j = 0; j < larg; j++) {
				if (!visited[i][j]) {
					rr = Math.min(rr, rec(v, visited, i, j, v[i][j], 1));
				}
			}
		}
		System.out.println(rr);

	}

	private static int rec(int[][] v, boolean[][] visited, int i, int j, int k, int total) {
		if(visited[i][j] || v[i][j] != k) {
			return 0;
		}

		visited[i][j] = true;

		if(i - 1 >= 0) {
			total = Math.max(total, rec(v, visited, i - 1, j, k, total + 1));
		}

		if(j - 1 >= 0) {
			total = Math.max(total, rec(v, visited, i, j - 1, k, total + 1));
		}

		if(i + 1 <= v.length - 1) {
			total = Math.max(total, rec(v, visited, i + 1, j, k, total + 1));
		}

		if(j + 1 <= v[i].length - 1) {
			total = Math.max(total, rec(v, visited, i, j + 1, k, total + 1));
		}

		return total;
	}
}
