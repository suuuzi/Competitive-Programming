// Roman Numerals Decoder (https://www.codewars.com/kata/roman-numerals-decoder/javascript)
function solution(roman){
    var output = 0;
    var R = {
      'M': 1000,
      'D': 500,
      'C': 100,
      'L': 50,
      'X': 10,
      'V': 5,
      'I': 1
    };
    
    var i = 0;
    while(i < roman.length) {
      if (i == (roman.length - 1) || R[roman[i]] >= R[roman[i+1]]){
        output += R[roman[i]];
      } else {
        output += R[roman[i+1]] - R[roman[i]];
        i++;
      }
      i++
    }
    
    return output;
};
