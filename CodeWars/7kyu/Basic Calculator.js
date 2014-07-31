// Problem: Basic Calculator (http://www.codewars.com/kata/5296455e4fe0cdf2e000059f)

function calculate(num1, operation, num2) {
     switch(operation){
       case "+": return num1 + num2;
       case "-": return num1 - num2;
       case "*": return num1 * num2;
       case "/": return num1 / num2;
       default: return null;
     }
}
