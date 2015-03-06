// Problem: You're a square! (http://www.codewars.com/kata/youre-a-square)

public class Square {
    public static boolean isSquare(int n) {
      return Math.sqrt(n) == (int) Math.sqrt(n);
    }
}
