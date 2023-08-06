import sys
n = int(input())
line = list(map(int,input().split()))
r = 0
w = 0
for i in range(n):
    if line[i] == 25:
        r += 1
    elif line[i] == 50:
        r -= 1
        w += 1
    else:
        if w > 0 :
            w -= 1
            r -= 1
        else: r -= 3
    if r < 0:
        print("NO")
        sys.exit()
print("YES")