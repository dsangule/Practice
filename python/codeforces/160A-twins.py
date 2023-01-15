n = int(input())
inp = input().split()

l = [int(i) for i in inp]
l.sort(reverse=True)
num_sum = sum(l)
value = 0
count = 0

while value <= num_sum/2:
	value += l[count]
	count += 1
print(count)	
