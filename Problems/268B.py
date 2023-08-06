n = int(input())
ans = 0
k = n-1
for i in range(1,n+1):
    ans += i*k 
    k -= 1
ans += n
print(ans)