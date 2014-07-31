// Problem: Sudoku Solution Validator (http://www.codewars.com/kata/529bf0e9bdf7657179000008)
// TODO refatorar

function validSolution(board){
  var sum_cols = [0,0,0,0,0,0,0,0,0];
	var sum_lines = [0,0,0,0,0,0,0,0,0];
	var sum_board = [[0,0,0], [0,0,0], [0,0,0]];
	var i = 0;
	var j = 0;
		
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++)  {
			var n = parseInt(board[i][j] * board[i][j]);		
			
			sum_lines[i] = (parseInt(sum_lines[i]) + n);
			sum_cols[j] = (parseInt(sum_cols[j]) + n);
			sum_board[parseInt(i/3)][parseInt(j/3)] = parseInt(sum_board[parseInt(i/3)][parseInt(j/3)]) + n;

			if (i == 8 && sum_cols[j] != 285) {
				break;
			}
		} 
	
		if (sum_lines[i] != 285)  {
			break;
		}
	}
  
	for (var i = 0; i < 3; i++)  {
		for (var j = 0; j < 3; j++) {
			if (sum_board[i][j] != 285)  {
				return false; 
			}
		}
	}			

	return true;
}
