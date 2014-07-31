// Problem: For the sake of argument (http://www.codewars.com/kata/5258b272e6925db09900386a)

function numbers() {
  for (var i = 0; i < arguments.length; i++) {
    if(typeof(arguments[i]) != 'number'){
      return false;
    }
  }
  return true;
}
