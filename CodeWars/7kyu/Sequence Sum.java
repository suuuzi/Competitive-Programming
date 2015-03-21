// Problem: Sequence Sum (http://www.codewars.com/kata/sequencesum)

import java.util.ArrayList;

public class SequenceSum {
  public static int[] sumOfN(int n) {
    int auxN = n;

    if(auxN < 0)
      auxN *= -1;

    ArrayList<Integer> output = new ArrayList<>();
    output.add(0);
    for (int i = 0; i < auxN; i++){
      output.add(output.size() + output.get(output.size()-1));
    }


    int[] adjacent = new int[output.size()];
        int count = 0;
        for (Integer n1 : output)
        {
            adjacent[count++] = (n < 0) ?  (n1.intValue() * -1) : n1.intValue();
        }
        return adjacent;

    }
}
