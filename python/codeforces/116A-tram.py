stops = int(input())
cap = 0
max_cap = 0
for i in range(stops):
	inp = input().split()
	people_exit = int(inp[0])
	people_enter = int(inp[1])
	cap += people_enter - people_exit
	if max_cap < cap:
		max_cap = cap
print(max_cap)
