// Solving Quadratics (http://www.codewars.com/kata/solving-quadratics/javascript)

function solveQuadratic(a, b, c) {
  var delta = (b * b) - (4 * a * c);
  
  if (delta < 0)
    return undefined;
    
  if (a === 0)
  {
    if (b === 0)
      return undefined;
    else if  (c === 0)
      return [0];
    else
      return [((-1 * c) / b)];
  }
 
  var s = Math.pow(delta, (1/2))

  var x1 = a === 0 ? 0 : ((b * -1) + s) / (2 * a);
  if (delta === 0)
    return [x1];

  var x2 = a === 0 ? 0 : ((b * -1) - s) / (2 * a);

  return [x1, x2];
}
