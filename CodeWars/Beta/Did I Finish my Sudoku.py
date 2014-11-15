def done_or_not(board):
  rows = board
  cols = [map(lambda x: x[i], board) for i in range(9)]
  squares = [
    board[i][j:j + 3] + board[i + 1][j:j + 3] + board[i + 2][j:j + 3]
      for i in range(0, 9, 3)
      for j in range(0, 9, 3)]
    
  for clusters in (rows, cols, squares):
    for cluster in clusters:
      if len(set(cluster)) != 9:
        return 'Try again!'
  return 'Finished!'
