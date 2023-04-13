s = input().split()
a = int(s[0])
b = int(s[1])

years = 0
while a <= b:
	years += 1
	a *= 3
	b *= 2
print(years)
