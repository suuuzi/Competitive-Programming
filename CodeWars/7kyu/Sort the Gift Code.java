// Problem: Sort the Gift Code (http://www.codewars.com/kata/sort-the-gift-code)

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class GiftSorter{
  public String sortGiftCode(String code){
      List<String> list = new ArrayList();

      for(int i = 0; i < code.length(); i++){
        list.add(code.charAt(i)+"");
      }

      Collections.sort(list, ALPHABETICAL_ORDER);

      String otp = "";

      for(int i = 0; i < list.size(); i++){
        otp += list.get(i);
      }

      return otp;
  }
    private static Comparator<String> ALPHABETICAL_ORDER = new Comparator<String>() {
        public int compare(String str1, String str2) {
            int res = String.CASE_INSENSITIVE_ORDER.compare(str1, str2);
            if (res == 0) {
                res = str1.compareTo(str2);
            }
            return res;
        }
    };      
}
