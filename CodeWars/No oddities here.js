// Problem: No oddities here (http://www.codewars.com/kata/51fd6bc82bc150b28e0000ce)

function noOdds(values){
  return values.filter(function removeOdds(i){ return i % 2 === 0; });
}
