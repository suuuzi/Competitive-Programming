// Authenticate a list of usernames.js (https://www.codewars.com/kata/authenticate-a-list-of-usernames/javascript)
function authList(arr) {
  var re = /^(?=.{6,10}$)(?![_.-])[a-z]+[0-9]+$/;
  for(var i = 0; i < arr.length; i++) {
    if(arr[i].match(re) === null) {
       return false; 
    }
  }
  
  return true;
}
