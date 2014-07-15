// Problem: Numerology (http://www.codewars.com/kata/525b4164eb636fb2f90002a0)

function solution(date){
	var arr = (date.getDate().toString() + date.getFullYear().toString() + ((date.getMonth()+1).toString())).split("");
	var s = 0;

	for(var i = 0; i < arr.length; i++){
      s += parseInt(arr[i]);
	}
	
	if(s > 9){
		var aux = s.toString().split("");
		s = parseInt(aux[0]) + parseInt(aux[1]);
	}
	
	return s;
}
