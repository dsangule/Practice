s = input().split("+")
s = [int(i) for i in s]

s.sort()
print("{}".format(s[0]), end='')
for j in range(1, len(s)):
	print("+{}".format(s[j]), end='')
