// 1718 - Pizza de vô Pepe (https://www.urionlinejudge.com.br/judge/pt/problems/view/1718

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		String[] l = r.readLine().split(" ");
		int a = Integer.parseInt(l[0]);
		int b = Integer.parseInt(l[1]);
		
		l = r.readLine().split(" ");
		int c = a / b;
		boolean[] bit = new boolean[a + a];
		
		for(int i = 0; i < l.length; i++){
			bit[Integer.parseInt(l[i])] = true;
		}
		
		for(int i = a, j = 0; i < a + a; i++, j++){
			if(bit[j]){
				bit[i] = true;
			}
		}
		
		boolean t = false;
		w: for(int i = 0; i < a; i++) {
			for(int j = i; j < i + a; j += c){
				int e = 0;
				for(int k = j; k < j + c; k++){
					if(bit[k]){
						e++;
					}
				}
				if(e != 1){
					continue w;
				}
			}
			t = true;
			break;
		}
		
		System.out.println(t ? "S" : "N");
	}

}
