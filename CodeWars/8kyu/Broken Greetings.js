// Problem: Broken Greetings (http://www.codewars.com/kata/50654ddff44f800200000001)

var name = "teste";

function Person(name){
  this.name = name;
}

Person.prototype.greet = function(otherName){
  return "Hi " + otherName + ", my name is " + this.name;
}

