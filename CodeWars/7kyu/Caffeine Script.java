// Problem: Caffeine Script (http://www.codewars.com/kata/caffeine-script)

public class CaffeineBuzz {
  public static String caffeineBuzz(int n){
    String output = "";
    if (n % 3 == 0 || n % 4 == 0){
      if(n % 4 == 0){
        output += "Coffee";
      } else {
        output += "Java";
      }

      if(n % 2 == 0){
        output += "Script";
      }
    }
    else {
      output = "mocha_missing!";
    }

    return output;
  }
}
