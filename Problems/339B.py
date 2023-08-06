n, m = map(int,input().split())
house = list(map(int,input().split()))
time = house[0]-1
for i in range(m-1):
    if (house[i+1] < house[i]):
        time += n-house[i]+house[i+1]
    elif (house[i+1] == house[i]):
        pass
    else:
        time += house[i+1]-house[i]
print(time)
