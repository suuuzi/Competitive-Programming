// Simple pig latin (https://www.codewars.com/kata/simple-pig-latin)
function pigIt(str){
  var arr = str.split(" ");
  var newStr = "";
  
  for(var i = 0; i < arr.length; i++) {
    newStr += arr[i].substring(1, arr[i].length);
    newStr += arr[i][0];
    newStr += 'ay ';
  }
  
  return newStr.substring(0, newStr.length - 1);
}
