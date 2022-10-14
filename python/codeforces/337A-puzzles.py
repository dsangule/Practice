inp = input().split()
n, m = int(inp[0]), int(inp[1])
s = input().split()
l = [int(i) for i in s]
l.sort()
min_val = l[m-1]
for i in range(m-n+1):
	val = l[n-1+i] - l[i]
	min_val = min(min_val, val)
min_val = min(min_val, l[-1]-l[0])
print(min_val)
