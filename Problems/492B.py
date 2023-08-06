n,l = map(int,input().split())
a = list(map(int,input().split()))
a.sort()
#print(a)
max = max(a[0],l-a[-1])
for i in range(len(a)-1):
    if ((a[i+1]-a[i]) / 2) > max:
        max = (a[i+1]-a[i]) / 2
print(format(max,'.10f'))
