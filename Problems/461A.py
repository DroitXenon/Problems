n = int(input())
a = list(map(int,input().split()))
a.sort()
k = 2
sum = 0
for i in a:
    sum += k*i
    k += 1
print(sum-max(a))