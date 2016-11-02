// N-th Fibonacci (https://www.codewars.com/kata/n-th-fibonacci/javascript)
function nthFibo(n) {
    var a = [];
     for(var i = 0; i < n; i++){
       a.push(fibo(i));
     }

    return a[a.length - 1];
}
  
function fibo(n){
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}
