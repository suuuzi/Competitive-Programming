// Problem: Naughty or Nice? (http://www.codewars.com/kata/52a6b34e43c2484ac10000cd)

function getNiceNames(people){
  var newArray = [];
  for(var i = 0; i < people.length; i++){
    if(people[i].wasNice){
      newArray.push(people[i].name);
    }
  }
  return newArray;
}

function getNaughtyNames(people){
  var newArray = [];
  for(var i = 0; i < people.length; i++){
    if(!people[i].wasNice){
      newArray.push(people[i].name);
    }
  }
  return newArray;
}
