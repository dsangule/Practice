n = int(input())
s = input()

tot_count = 0
for i in range(n-1):
	if s[i] == s[i+1]:
		tot_count += 1
print(tot_count)		
