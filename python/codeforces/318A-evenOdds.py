import math

inp = input().split()
n = int(inp[0])
k = int(inp[1])

if k <= math.ceil(n/2):
	print(2*k-1)
else:
	print(2*(k-math.ceil(n/2)))
