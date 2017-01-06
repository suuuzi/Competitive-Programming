// Problem: Convert Time to String (http://www.codewars.com/kata/convert-time-to-string)


class TimeUtils {
public static String convertTime(int timeDiff) {
    int day = 0, hour = 0, minute = 0, second = 0;

    int timeAux = timeDiff;

    if(timeAux < 0){
      timeAux *= -1;
    }

    while(timeAux > 0){
      if(timeAux >= 86400){
        day ++;
        timeAux -= 86400;
      } else if(timeAux >= 3600){
        hour ++;
        timeAux -= 3600;
      } else if (timeAux >= 60) {
        minute ++;
        timeAux -= 60;
      } else {
        second = timeAux;
        timeAux = 0;
      }

    }

    if(timeDiff < 0){
      day *= -1;
      hour *= -1;
      minute *= -1;
      second *= -1;
    }

    return day + " " + hour + " " + minute + " " + second ;

  }
}
