n,m = map(int,input().split())
if n<m:
    if m // 2 >= n:
        print(n)
    else:
        print(m // 2)
elif n == m:
    print((n // 3)*2)
else:
    if n // 2 >= m:
        print(m)
    else:
        print(n // 2)