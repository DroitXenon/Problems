n = int(input())
list1 = list(map(int, input().split()))
if (list1[0]+list1[1]) % 2 != 0:
    if (list1[1]+list1[2]) % 2 == 0:
        print("1")
    else:
        print("2")
else:
    for i in range(n):
        if (list1[i]+list1[i+1]) % 2 != 0:
            print(i+2)
            break
