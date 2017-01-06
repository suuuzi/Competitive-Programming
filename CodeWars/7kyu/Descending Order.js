// Descending Order - https://www.codewars.com/kata/descending-order/javascript

function descendingOrder(n){
  return parseInt(n.toString().split("").sort().reverse().join(""));
}
