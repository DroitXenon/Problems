n = input()
a = list(input())
print(len(a)-2 * min(a.count('0'),a.count('1')))
