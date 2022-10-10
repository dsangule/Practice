loops = int(input())
count = 0
for i in range(loops):
	s = input()
	if s == "X++" or s == "++X":
		count += 1
	elif s == "X--" or s == "--X":
		count -= 1
print(count)
