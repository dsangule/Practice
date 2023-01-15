inp = input().split()
n = int(inp[0])
t = int(inp[1])

s = input()
l = [i for i in s]
lt = [i for i in s]

for i in range(t):
	for j in range(n-1):
		if l[j] == "B" and l[j+1] == "G":
			lt[j] = "G"
			lt[j+1] = "B"
	l = [i for i in lt]
print(*lt, sep='')
		
