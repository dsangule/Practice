n = int(input())
inp = input().split()
l = [int(i) for i in inp]

count = 1
max_count = 1

for i in range(n-1):
	if l[i] > l[i+1]:
		max_count = max(max_count, count)
		count = 1
		continue
	else:
		count += 1
max_count = max(max_count, count)
print(max_count)
