a=input().split()
b=[int(i) for i in a]
b.sort()
print(*b,sep='\n')
print()
print(*a,sep='\n')
