//Problem: Dear Bhaskara (http://www.codewars.com/kata/dear-bhaskara) My Test Kata

function bhaskara(a, b, c) {

  var delta = (b * b) - (4 * a * c);
  
  if (delta < 0)
    return "No Bhaskara for you!";
  
  var x1 = ((b * -1) + Math.sqrt(delta)) / (2 * a);
  var x2 = ((b * -1) - Math.sqrt(delta)) / (2 * a);

  return "X1 = " + x1.toFixed(2).toString() + " and X2 = " + x2.toFixed(2).toString();
}
