// Problem: Reverse words (http://www.codewars.com/kata/5259b20d6021e9e14c0010d4)

function reverseWords(str) {
  return str.split(" ").map( function(x) { return x.split("").reverse().join(""); } ).join(" ");
}
