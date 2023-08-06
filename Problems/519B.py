n = int(input())
a = list(map(int, input().split()))
a.sort()
b = list(map(int, input().split()))
b.sort()
c = list(map(int, input().split()))
c.sort()
lasta = True
for i in range(len(a)-1):
    if a[i] != b[i]:
        print(a[i])
        lasta = False
        break
if lasta:
    print(a[-1])
lastb = True
for i in range(len(b)-1):
    if b[i] != c[i]:
        print(b[i])
        lastb = False
        break
if lastb:
    print(b[-1])
