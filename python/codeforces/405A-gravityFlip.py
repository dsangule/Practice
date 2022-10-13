n = int(input())
a = input().split()
l = [int(i) for i in a]
l.sort()
print(*l)
