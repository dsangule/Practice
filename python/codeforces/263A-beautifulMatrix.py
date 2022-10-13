A = []
for n in range(5):
	inp = input().split()
	A.append(inp)
x = 0
y = 0
for i in range(5):
	for j in range(5):
		if A[i][j] == "1":
			x = i
			y = j
print(abs(2-x)+abs(2-y))
