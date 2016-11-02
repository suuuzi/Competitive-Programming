// Problem: Ease the StockBroker (https://www.codewars.com/kata/54de3257f565801d96001200)

public class OrdersSummary {

  public static String balanceStatements(String lst) {
    if(lst.isEmpty()){
      return "Buy: 0 Sell: 0";
    }

    String[] input = lst.split(", ");
    double buy = 0, sell = 0;
    String badlyFormed = "";

    for(String s : input){
      if(isBadlyFormed(s)){
        badlyFormed += s + " ;";
      }
      else {
        String[] aux = s.split(" ");
        if(s.endsWith("B")){
          buy += Double.parseDouble(aux[2]) * Double.parseDouble(aux[1]);
        }
        else{
          sell += Double.parseDouble(aux[2]) * Double.parseDouble(aux[1]);
        }
      }

    }

    String buyF = String.valueOf(Math.round(buy*100.0)/100.0).replace(".0", "");
    String sellF = String.valueOf(Math.round(sell*100.0)/100.0).replace(".0", "");

    String[] badly = badlyFormed.split(";");
    int qtdBadly = badly.length;

    String outp = "Buy: " + Long.parseUnsignedLong(buyF) + " Sell: " + Long.parseUnsignedLong(sellF);
    if(badlyFormed.isEmpty()){
      return outp;
    } else {
      return outp + "; Badly formed " + qtdBadly + ": " + badlyFormed.toString();
    }
  }

  public static boolean isBadlyFormed(String line){
    String[] fields = line.split(" ");

    if(fields.length == 4){
      if(fields[3].equals("B") || fields[3].equals("S")){
        if(fields[2].contains(".")){
            return false;
        }
      }
    }

    return true;
  }
}
