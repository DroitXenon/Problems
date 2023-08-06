a,b,s = map(int,input().split())
if (((s-(abs(a)+abs(b))) % 2) == 0) and (s >= abs(a)+abs(b)):
    print('Yes')
else:
    print('No')