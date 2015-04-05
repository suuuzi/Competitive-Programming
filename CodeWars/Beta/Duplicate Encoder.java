// Problem: Duplicate Encoder (http://www.codewars.com/kata/duplicate-encoder)

import java.util.HashMap;
import java.util.Map;

public class DuplicateEncoder {
  public static String encode(String phrase) {
        Map<Character, Integer> map = new HashMap<>();
    phrase = phrase.toLowerCase();

    for(int i = 0; i < phrase.length(); i++){
      if(map.containsKey(phrase.charAt(i))){
        int value = map.get(phrase.charAt(i));
        map.remove(phrase.charAt(i));
        map.put(phrase.charAt(i), ++value);

      } else {
        map.put(phrase.charAt(i), 1);
      }
    }

    String output = "";

    for(int i = 0; i < phrase.length(); i++){
      output += (map.get(phrase.charAt(i)) > 1) ? ")" : "(";
    }

    return output;
    }
}
