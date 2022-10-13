s = input()

upper_count = 0
for i in range(len(s)):
	if s[i].isupper():
		upper_count += 1

if upper_count > (len(s)/2):
	s = s.upper()
else:
	s = s.lower()
print(s)
