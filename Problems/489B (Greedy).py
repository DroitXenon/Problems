def greedy():
    j = 0
    ans = 0
    i = 0
    while (True):
        if (i == n) or (j == m):
            break
        if abs(b[j] - a[i]) <= 1:
            ans += 1
            j += 1
            i += 1
        elif b[j] - a[i] > 1:
            i += 1
        elif a[i] - b[j] > 1:
            j += 1
    return ans

n = int(input())
a = list(map(int, input().split()))
a.sort()
m = int(input())
b = list(map(int, input().split()))
b.sort()
print(greedy())