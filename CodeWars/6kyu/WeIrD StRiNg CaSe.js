// Problem: WeIrD StRiNg CaSe (http://www.codewars.com/kata/52b757663a95b11b3d00062d)

String.prototype.weirdCase = function() {
    var weird = "";
    for(var i = 0; i < this.length; i++){
      weird += ((i % 2 == 0) ? this[i].toUpperCase() : this[i].toLowerCase());
    }
  return weird;
}
function toWeirdCase(string){
  var words = string.split(' ');
  var weird = "";
  
  for(var i = 0; i < words.length; i++){
    weird += words[i].weirdCase() + " ";
  }
  return weird.substring(0, weird.length - 1);
}
