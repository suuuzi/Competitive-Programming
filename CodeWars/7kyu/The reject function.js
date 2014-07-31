// Problem: The reject() function (http://www.codewars.com/kata/52988f3f7edba9839c00037d)

function reject(array, iterator) {
  var newArr = [];
  array.forEach(function(a){
    if(!iterator.call(this, a)){
      newArr.push(a);
    }
  });
  
  return newArr;
}
