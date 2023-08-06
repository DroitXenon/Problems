def binarysearch(num):
    high = n
    low = 1
    if num <= a[1]:
        return 1
    while (True):
        mid = (low+high+1) // 2
        if low+1 == high:
            return high
        elif a[mid] == num:
            return mid
        elif a[mid] > num:
            high = mid
        elif a[mid] < num:
            low = mid


n = int(input())
a = list(map(int, input().split()))
m = int(input())
q = list(map(int, input().split()))
# for i in q:
#     sum = 0
#     j = 0
#     while sum < i:
#         sum += a[j]
#         j += 1
#     print(j)
for i in range(1, n):
    a[i] += a[i-1]
# print(a)
a.insert(n+1, '0')
for i in range(n-1, -1, -1):
    a[i+1] = a[i]
for x in q:
    print(binarysearch(x))
