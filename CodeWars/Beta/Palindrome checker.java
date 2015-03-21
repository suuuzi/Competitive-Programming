// Problem: Palindrome checker (http://www.codewars.com/kata/palindrome-checker)Palindrome checker (http://www.codewars.com/kata/palindrome-checker)

public class PalindromChecker {
  public boolean isPalindrome(String str) {
     return str.trim().replaceAll("\\W", "").equalsIgnoreCase(new StringBuilder(str.trim().replaceAll("\\W", "")).reverse().toString());
  }
}
