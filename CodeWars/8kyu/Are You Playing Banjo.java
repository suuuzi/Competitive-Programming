// Problem: Are You Playing Banjo? (http://www.codewars.com/kata/are-you-playing-banjo)

public class Banjo
{
  public static String areYouPlayingBanjo(String name)
  {
    if( name.toUpperCase().startsWith("R") )
      return name + " plays banjo";
    else
      return name + " does not play banjo";
  }
}
