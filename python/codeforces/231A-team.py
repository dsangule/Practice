loops = int(input())
count = 0
for i in range(loops):
	s = input()
	n = int(s[0]) + int(s[2]) + int(s[4])
	if n>1:
		count = count + 1
print(count)
