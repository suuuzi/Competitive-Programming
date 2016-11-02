// Stop gninnipS My sdroW! (https://www.codewars.com/kata/stop-gninnips-my-sdrow)

function spinWords(string){
  var newStr = '';
  var arr = string.split(" ");
  
  for(var i = 0; i < arr.length; i ++) {
    newStr += (arr[i].length >= 5) ? arr[i].reverse() : arr[i];
    newStr += ' ';
  }
  
  return newStr.substring(0, newStr.length - 1);
}

String.prototype.reverse = function () { return this.split("").reverse().join(""); };
