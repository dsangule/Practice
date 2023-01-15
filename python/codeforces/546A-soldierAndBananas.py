inp = input().split()
k = int(inp[0])
n = int(inp[1])
w = int(inp[2])

cost = ((w*(w+1))//2)*k
if cost > n:
	print(cost-n)
else:
	print(0)
