// Problem: Basic JS - Calculating averages (http://www.codewars.com/kata/529f32794a6db5d32a00071f)

var Calculator = {
 average: function() {
  var s = 0;
  
  for(var i = 0; i < arguments.length; i++){
    s += parseInt(arguments[i]);
  }
  
  return arguments.length === 0 ? 0 : s / arguments.length;
 }
};
