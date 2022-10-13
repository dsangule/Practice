s = input()
t = input()

for i in range(len(s)):
	if t[i] != s[len(s)-1-i]:
		print("NO")
		break
	if i == len(s)-1 and t[i] == s[len(s)-1-i]:
		print("YES")
