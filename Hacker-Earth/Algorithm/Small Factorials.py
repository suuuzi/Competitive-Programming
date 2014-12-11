# Problem: Small Factorials (http://www.hackerearth.com/problem/algorithm/small-factorials/)

input = raw_input();

def fat(x):
	if x == 0 or x == 1:
		return 1;
	else:
		return (x * fat(x-1));	

for i in range(int(input)):
	numero = raw_input();
	print(fat(int(numero)));	
