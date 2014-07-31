// Problem: Sort Numbers (http://www.codewars.com/kata/5174a4c0f2769dd8b1000003)

function solution(nums){
    return nums === null ? [] : nums.sort(function(a,b){return a - b});
}
