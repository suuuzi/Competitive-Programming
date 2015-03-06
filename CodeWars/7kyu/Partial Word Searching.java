// Problem: Partial Word Searching (http://www.codewars.com/kata/partial-word-searching)

class WordSearch {
  static String[] findWord(String x, String[] y){
    String output = "";
    for(int i = 0; i < y.length; i++){
        if(y[i].toLowerCase().contains(x.toLowerCase()))
         output += y[i] + ",";
      }

      return (output.length() > 0) ? output.split(",") : new String[] {"Empty"};

  }
}
