// Problem: Square Every Digit (http://www.codewars.com/kata/square-every-digit/java)

public class SquareDigit {

  public int squareDigits(int n) {
    String s = n + "";
    String[] digits = s.split("");
    String output = "";

    for (String str : digits) {
      int i = Integer.parseInt(str);
      output +=  i * i;
    }

    return Integer.parseInt(output);
  }
}
