// Problem: Elapsed Seconds (http://www.codewars.com/kata/517b25a48557c200b800000c)

function elapsedSeconds(startDate, endDate){
  return (endDate.getTime() - startDate.getTime()) / 1000;
}
