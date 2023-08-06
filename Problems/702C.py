n,m = map(int,input().split())
a = list(map(int,input().split()))
b = list(map(int,input().split()))
list = [[0 for i in range(len(b))] for j in range(len(a))]
#print(list)
for i in range(len(b)):
    for j in range(len(a)):
        list[j][i] = abs(a[j]-b[i])
list0 = [0 for i in range(len(a))]
for i in range(len(a)):
    list0[i] = min(list[i])
# print(list1)
print(max(list0))
        