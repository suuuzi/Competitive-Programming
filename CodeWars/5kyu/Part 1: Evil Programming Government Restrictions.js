// Part 1: Evil Programming Government Restrictions (https://www.codewars.com/kata/part-1-evil-programming-government-restrictions/javascript)

var anarchy = function () {
  var b = true;
  return 'I can write numbers like, ' + +!!b + ', ' + (+!!b + (+!!b)) + ', ' + (+!!b + (+!!b)+ (+!!b)) + '.';
}
