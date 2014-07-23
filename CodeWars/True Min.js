// Problem: True Min (http://www.codewars.com/kata/52378b3ee72f21e1ea000045)

function min(a, b){  
  if(a === null || b === null)
    return (a == null && b == null) ? 0 : (a == null) ? (b > 0) ? 0 : b : (a > 0) ? 0 : a;
    
  if(Number.isNaN(a) || Number.isNaN(b) || a === undefined || b === undefined)
    return Number.NaN;
  
  return (a < b) ? a : b;
}
