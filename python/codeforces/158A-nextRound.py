inp1 = input().split(" ")
n,k = int(inp1[0]),int(inp1[1])
a = input().split(" ")
count = 0
for i in a:
	if int(i) >= int(a[k-1]) and int(i) != 0:
		count = count + 1
print(count)	
