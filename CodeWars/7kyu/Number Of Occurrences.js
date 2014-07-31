// Problem: Number Of Occurrences (http://www.codewars.com/kata/52829c5fe08baf7edc00122b)

Array.prototype.numberOfOccurrences = function(chr) {
  return this.filter(function(x){ return x == chr; }).length;
}
