// Problem: Greet Me (http://www.codewars.com/kata/greet-me/ruby)

var greet = function(name) {
  return "Hello " + name.charAt(0).toUpperCase() + name.slice(1).toLowerCase() + "!";
};
