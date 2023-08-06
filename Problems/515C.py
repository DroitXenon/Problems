# from math import factorial

# n = int(input())
# a = list(map(int,input()))
# sum = 1
# for i in range(n):
#     sum *= factorial(int(a[i]))
# # print(sum)
# b = []
# for i in range(max(a)-1,1,-1):
#     while (sum % factorial(i) == 0):
#         sum = sum // factorial(i)
#         b.append(i)
# if sum == 1:
#     for x in b:
#         print(x,end='')
# else:
#     for x in a:
#         print(x,end='')
 
 
n = int(input())
a = list(input())
dic = {"2" : '2', "3":"3", "4": "322", "5":"5","6":"53","7":"7","8":"7222","9":"7332"}
while(a.count('0') > 0):
    a.remove('0')
while(a.count('1') > 0):
    a.remove('1')
for i in range(len(a)):
    if a[i] in dic:
        a[i] = dic[a[i]]
ans = ""
for i in range(len(a)):
    ans += a[i]
# print(ans)
ans_list = list(ans)
ans_list.sort(reverse = True)
for x in ans_list:
    print(x, end="")