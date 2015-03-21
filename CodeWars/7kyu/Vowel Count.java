// Problem: Vowel Count (http://www.codewars.com/kata/vowel-count)

import java.util.ArrayList;

public class Vowels {

  public static int getCount(String str) {
    int vowelsCount = 0;
    ArrayList<Character> vowels = new ArrayList<>();

    vowels.add('a');
    vowels.add('e');
    vowels.add('i');
    vowels.add('o');
    vowels.add('u');

    for(char s : str.toLowerCase().toCharArray()){
      if(vowels.contains(s)){
        vowelsCount ++;
      }
    }

    return vowelsCount;
  }

}
