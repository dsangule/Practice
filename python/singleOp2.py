for _ in range(int(input())):
	n = int(input())
	s = input() # binary representation
	c = 1
	print(s)
	for x in s[1:]:
		if x == "1":
			break
		c += 1
	print(c)
