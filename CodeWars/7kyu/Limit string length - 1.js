// Problem: Limit string length - 1 (http://www.codewars.com/kata/5208fc3cb613bc725f000142)

function solution(string,limit){
    return (string.length <= limit) ? string : string.substring(0, limit) +  '...';
}
