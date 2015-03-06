// Problem: Sentence Smash (http://www.codewars.com/kata/sentence-smash)

import java.util.Arrays;

public class SmashWords {

  public static String smash(String[] words) {
    String str = "";

    for (String s : words)
      str += s + " ";

    return str.isEmpty() ? "" : str.substring(0, str.length() - 1);
  }
}
