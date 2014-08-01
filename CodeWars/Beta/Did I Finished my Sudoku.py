# Problem: Did I Finished my Sudoku? (http://www.codewars.com/kata/did-i-finished-my-sudoku/python) - My test kata

def done_or_not(board):
  sum_cols = [0,0,0,0,0,0,0,0,0];
  sum_lines = [0,0,0,0,0,0,0,0,0];
  sum_board = [[0,0,0], [0,0,0], [0,0,0]];
  i = 0;
  j = 0;
    
  for i in range(0, 9):
    for j in range(0, 9):
      n = int(board[i][j] * board[i][j]);    
      
      sum_lines[i] = (int(sum_lines[i]) + n);
      sum_cols[j] = (int(sum_cols[j]) + n);
      sum_board[int(i/3)][int(j/3)] = int(sum_board[int(i/3)][int(j/3)]) + n;

      if i == 8 and sum_cols[j] != 285:
        break;
      
  
    if sum_lines[i] != 285:
      break;
  
  
  for i in range(0, 3): 
    for j in range(0, 3): 
      if sum_board[i][j] != 285:
        return 'Try again!'; 
    

  return 'Finished!';
