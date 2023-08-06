n,k = map(int,input().split())
a = list(map(int,input().split()))
sum1,sum2 = 0,0
for i in range(n):
    sum2 += a[i]
for i in range(n-1):
    if a[i] + a[i+1] < k:
        a[i+1] += k - (a[i]+a[i+1])
for i in range(n):
    sum1 += a[i]
print(sum1-sum2)
for x in a:
    print(x,end=' ')