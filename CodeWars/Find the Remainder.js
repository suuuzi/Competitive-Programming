// Problem: Find the Remainder (http://www.codewars.com/kata/524f5125ad9c12894e00003f)

function remainder(a, b){
  return b > a ? (a == 0 ? Number.Nan : b % a) : (b == 0 ? Number.Nan : a % b);
}
