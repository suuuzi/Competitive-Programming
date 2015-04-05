// Problem: Jaden Casing Strings (http://www.codewars.com/kata/jaden-casing-strings)

public class JadenCase {

  public String toJadenCase(String phrase) {
    if(phrase.isEmpty())
      return null;

    String[] arr = phrase.split(" ");
    String outString = "";
    for(String s : arr){
      outString += capitalize(s) + " ";
    }

    return outString.substring(0, outString.length() - 1);
  }

  public static String capitalize(String str) {
    return Character.toUpperCase(str.charAt(0)) + str.substring(1);
  }

}
