// Problem: Summing a number's digits (http://www.codewars.com/kata/52f3149496de55aded000410)

function sumDigits(number) {
    str = number + "";
    result = 0;
 
    for (var i = 0; i < str.length; i += 1){
 
      if(str[i] === '-'){
      	continue;
      } 
 
      result += parseInt(str[i]);
    }
 
    return result;
}
