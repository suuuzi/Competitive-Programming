// 1715 - Handebol (https://www.urionlinejudge.com.br/judge/pt/problems/view/1715)

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		String[] l = r.readLine().split(" ");
		int n = Integer.parseInt(l[0]);
		
		int cc = 0;
		for(int i = 0; i < n; i++){
			l = r.readLine().split(" ");
			boolean hasZero = false;
			for(String s : l){
				if(s.equals("0")){
					hasZero = true;
					break;
				}
			}
			if(!hasZero){
				cc++;
			}
		}
		System.out.println(cc);
	}

}
