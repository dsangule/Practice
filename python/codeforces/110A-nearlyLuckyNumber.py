s = input()
n = s.count("4") + s.count("7")
sn = str(n)

b = 1
for i in sn:
	if i == "4" or i == "7":
		continue
	else:
		b = 0
if b == 1:
	print("YES")
else:
	print("NO")
