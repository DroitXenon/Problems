n , m = map(int,input().split())
str = [[0 for i in range(m)] for i in range(3)]
for i in range(m):
    str[1][i],str[2][i] = input().split()
lecture = input().split()
order = 0
for i in range(n):
    if lecture[i] in str[1]:
        order = str[1].index(lecture[i])
        if len(str[1][order]) > len(str[2][order]):
            lecture[i] = str[2][order]
    else:
        order = str[2].index(lecture[i])
        if len(str[1][order]) <= len(str[2][order]):
            lecture[i] = str[1][order]

# for i in range(n):
#     if len(str[i][1]) <= len(str[i][2]):
#         if lecture[i] == str[i][2]:
#             lecture[i] = str[i][1]
#     else:
#         if lecture[i] == str[i][1]:
#             lecture[i] = str[i][2]
for x in lecture:
    print(x,end=' ')
