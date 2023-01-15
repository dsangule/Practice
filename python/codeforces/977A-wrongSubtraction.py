inp = input().split()
n = int(inp[0])
k = int(inp[1])

for i in range(k):
	if n%10 != 0:
		n -= 1
	else:
		n //= 10

print(n)
